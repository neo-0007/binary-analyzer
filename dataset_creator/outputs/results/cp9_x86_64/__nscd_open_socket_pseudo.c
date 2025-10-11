
int __nscd_open_socket(undefined8 param_1,ulong param_2,undefined4 param_3,void *param_4,
                      size_t param_5)

{
  undefined4 uVar1;
  int __fd;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  
  if (0x400 < param_2) {
    return -1;
  }
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  __fd = open_socket(param_3,param_1,param_2);
  if (-1 < __fd) {
    iVar2 = wait_on_socket(__fd,5000);
    if (0 < iVar2) {
      do {
        sVar3 = read(__fd,param_4,param_5);
        if (sVar3 != 0xffffffffffffffff) break;
      } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
      if (param_5 == sVar3) {
        return __fd;
      }
    }
    __close_nocancel(__fd);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return -1;
}

