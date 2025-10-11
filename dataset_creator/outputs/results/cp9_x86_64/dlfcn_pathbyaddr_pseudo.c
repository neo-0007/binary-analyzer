
int dlfcn_pathbyaddr(code *param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (code *)0x0) {
    param_1 = dlfcn_pathbyaddr;
  }
  iVar1 = dladdr(param_1,local_58);
  if (iVar1 == 0) {
    uVar3 = dlerror();
    param_3 = -1;
    ERR_add_error_data(2,"dlfcn_pathbyaddr(): ",uVar3);
  }
  else {
    sVar2 = strlen(local_58[0]);
    iVar1 = (int)sVar2;
    if (param_3 < 1) {
      param_3 = iVar1 + 1;
    }
    else {
      if (iVar1 < param_3) {
        param_3 = iVar1 + 1;
      }
      else {
        iVar1 = param_3 + -1;
      }
      memcpy(param_2,local_58[0],(long)iVar1);
      *(undefined1 *)((long)param_2 + (long)iVar1) = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

