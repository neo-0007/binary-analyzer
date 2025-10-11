
int OSSL_PARAM_get_utf8_string(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_30 [2];
  
  if (((param_2 != (long *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 4)) {
    local_30[0] = param_3;
    iVar2 = get_string_internal_part_0(param_1,param_2,local_30,0,4);
    uVar1 = local_30[0];
    uVar3 = *(ulong *)(param_1 + 0x18);
    if (iVar2 != 0) {
      if ((local_30[0] <= uVar3) &&
         (uVar3 = OPENSSL_strnlen(*(undefined8 *)(param_1 + 0x10)), uVar1 <= uVar3)) {
        return 0;
      }
      *(undefined1 *)(*param_2 + uVar3) = 0;
      return iVar2;
    }
  }
  return 0;
}

