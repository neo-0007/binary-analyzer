
undefined4 reopen(long param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  sockaddr *__addr;
  long lVar3;
  socklen_t __len;
  long in_FS_OFFSET;
  
  lVar3 = (long)param_3;
  lVar1 = lVar3 + 0x80;
  if (*(int *)(param_1 + 8 + lVar1 * 4) != -1) {
    return 1;
  }
  __addr = (sockaddr *)__res_get_nsaddr(param_1,param_3);
  if (__addr->sa_family == 10) {
    if ((*(byte *)(param_1 + 0x189) & 1) == 0) {
      iVar2 = socket(10,0x80802,0);
      *(int *)(param_1 + 8 + lVar1 * 4) = iVar2;
      __len = 0x1c;
      if (iVar2 < 0) {
        iVar2 = *(int *)(in_FS_OFFSET + -0x58);
        *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) & 0xfe | iVar2 == 0x61;
        goto LAB_007bc10a;
      }
      goto LAB_007bc068;
    }
LAB_007bc053:
    iVar2 = *(int *)(param_1 + 0x208 + lVar3 * 4);
  }
  else {
    if (__addr->sa_family != 2) goto LAB_007bc053;
    iVar2 = socket(2,0x80802,0);
    *(int *)(param_1 + 8 + lVar1 * 4) = iVar2;
  }
  __len = 0x10;
  if (iVar2 < 0) {
    iVar2 = *(int *)(in_FS_OFFSET + -0x58);
LAB_007bc10a:
    *param_2 = iVar2;
    return 0xffffffff;
  }
LAB_007bc068:
  iVar2 = __res_enable_icmp(__addr->sa_family,iVar2);
  if (iVar2 < 0) {
    iVar2 = *(int *)(in_FS_OFFSET + -0x58);
    __res_iclose(param_1,0);
    *(int *)(in_FS_OFFSET + -0x58) = iVar2;
    *param_2 = iVar2;
    return 0xffffffff;
  }
  iVar2 = connect(*(int *)(param_1 + 0x208 + lVar3 * 4),__addr,__len);
  if (-1 < iVar2) {
    return 1;
  }
  __res_iclose(param_1,0);
  return 0;
}

