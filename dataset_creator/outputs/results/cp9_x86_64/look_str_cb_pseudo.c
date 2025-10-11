
void look_str_cb(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char *__s;
  int iVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4[1] == 0) {
    iVar4 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar4) break;
      lVar2 = OPENSSL_sk_value(param_2,iVar4);
      (**(code **)(lVar2 + 0x50))(lVar2,&local_48,0,param_1);
      if (local_48 != 0) {
        __s = *(char **)(local_48 + 0x10);
        sVar3 = strlen(__s);
        if ((int)param_4[3] == (int)sVar3) {
          iVar1 = OPENSSL_strncasecmp(__s,param_4[2]);
          if (iVar1 == 0) {
            *param_4 = lVar2;
            param_4[1] = local_48;
            break;
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

