
undefined8 FUN_00496df7(undefined8 param_1)

{
  uint in_XMM1_Dd;
  uint in_XMM4_Da;
  
  return CONCAT44((uint)((ulong)param_1 >> 0x20) ^ in_XMM4_Da ^ (uint)param_1 ^ in_XMM1_Dd,
                  (uint)param_1 ^ in_XMM1_Dd);
}

