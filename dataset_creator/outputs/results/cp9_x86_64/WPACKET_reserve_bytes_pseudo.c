
undefined8 WPACKET_reserve_bytes(undefined8 *param_1,ulong param_2,long *param_3)

{
  BUF_MEM *str;
  int iVar1;
  ulong uVar2;
  undefined4 extraout_var;
  long lVar3;
  ulong len;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 <= (ulong)(param_1[4] - param_1[3]))) {
    str = (BUF_MEM *)*param_1;
    if ((str != (BUF_MEM *)0x0) && (uVar2 = str->length, uVar2 - param_1[3] < param_2)) {
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      len = 0xffffffffffffffff;
      if ((-1 < (long)uVar2) && (len = uVar2 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar1 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar1) == 0) {
        return 0;
      }
    }
    if (param_3 != (long *)0x0) {
      lVar3 = WPACKET_get_curr(param_1);
      *param_3 = lVar3;
      if (((*(byte *)(param_1 + 6) & 1) != 0) && (lVar3 != 0)) {
        *param_3 = lVar3 - param_2;
      }
    }
    return 1;
  }
  return 0;
}

