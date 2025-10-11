
long ossl_decode_der_dsa_sig(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_58;
  long local_50;
  undefined1 local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_3;
  if (-1 < param_4) {
    local_58 = pcVar1;
    local_50 = param_4;
    if (param_4 != 0) {
      local_50 = param_4 + -1;
      local_58 = pcVar1 + 1;
      if (*pcVar1 == '0') {
        iVar2 = ossl_decode_der_length(&local_58,local_48);
        if (iVar2 != 0) {
          iVar2 = ossl_decode_der_integer(local_48,param_1);
          if (iVar2 != 0) {
            iVar2 = ossl_decode_der_integer(local_48,param_2);
            if ((iVar2 != 0) && (local_40 == 0)) {
              lVar3 = (long)local_58 - *param_3;
              *param_3 = (long)local_58;
              goto LAB_005386fd;
            }
          }
        }
      }
    }
  }
  lVar3 = 0;
LAB_005386fd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

