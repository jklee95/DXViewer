cbuffer cbPerObject : register(b0)
{
	float4x4 gWorldViewProj;
	float4x4 gWorld;
	float4x4 gTransInvWorld;
	float4 gColor;
};


void main(float3 iPosL  : POSITION, float3 iNormalL	: NORMAL,
	out float4 oPosH  : SV_POSITION, out float3 oNormalW  : NORMAL,
	out float4 oColor : COLOR)
{
	float3x3 transInvWorld = (float3x3) gTransInvWorld;
	oNormalW = normalize(mul(transInvWorld, iNormalL));
	//float4 posW = mul(gWorld, float4(iPosL, 1.0f));

	// Transform to homogeneous clip space.
	oPosH = mul(gWorldViewProj, float4(iPosL, 1.0f));
	
	// Just pass vertex color into the pixel shader.
	oColor = gColor;
}