
undefined8 __mpn_extract_double(ulong *param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 in_XMM0 [16];
  
  *param_4 = in_XMM0._4_4_ >> 0x1f;
  *param_3 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3ff;
  uVar3 = in_XMM0._0_8_ & 0xfffffffffffff;
  *param_1 = uVar3;
  if ((in_XMM0._0_8_ >> 0x30 & 0x7ff0) != 0) {
    *param_1 = uVar3 | 0x10000000000000;
    return 1;
  }
  if ((in_XMM0 & (undefined1  [16])0xfffffffffffff) == (undefined1  [16])0x0) {
    *param_3 = 0;
    return 1;
  }
  lVar1 = 0x3f;
  if ((in_XMM0 & (undefined1  [16])0xfffffffffffff) != (undefined1  [16])0x0) {
    for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = ((uint)lVar1 ^ 0x3f) - 0xb;
  *param_1 = uVar3 << ((byte)iVar2 & 0x3f);
  *param_3 = -0x3fe - iVar2;
  return 1;
}

