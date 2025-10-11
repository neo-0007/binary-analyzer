
ulong __mpn_construct_double(ulong *param_1,short param_2,int param_3)

{
  return *param_1 & 0xffffffff |
         (ulong)(((ushort)(param_2 + 0x3ff) & 0x7ff) << 0x14 | (uint)(*param_1 >> 0x20) & 0xfffff |
                param_3 << 0x1f) << 0x20;
}

