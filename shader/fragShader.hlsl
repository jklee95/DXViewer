

float4 main(float4 PosH  : SV_POSITION, float3 NormalW : NORMAL,
    float4 fColor : COLOR) : SV_Target
{
    float3 light = normalize(float3(1.0f, 1.0f ,1.0f));
    float3 normal = normalize(NormalW);

    float3 diff = max(dot(normal, light), 0.1f);
    float3 ambient = fColor.xyz;

    float4 fragColor = float4(diff + ambient, fColor.w);

    return fragColor;
}
