
size_t __readall(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  size_t __nbytes;
  long in_FS_OFFSET;
  
  __nbytes = param_3;
LAB_00778cd8:
  do {
    sVar2 = read(param_1,param_2,__nbytes);
    if (sVar2 == 0xffffffffffffffff) {
      iVar1 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar1 == 4) goto LAB_00778cd8;
    }
    else {
      if (0 < (long)sVar2) {
        param_2 = (void *)((long)param_2 + sVar2);
        __nbytes = __nbytes - sVar2;
        if (__nbytes == 0) {
          return param_3;
        }
        goto LAB_00778cd8;
      }
      if (sVar2 == 0) goto LAB_00778d3a;
      iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    }
    if ((iVar1 != 0xb) || (iVar1 = wait_on_socket(param_1,200), iVar1 < 1)) {
      if ((long)sVar2 < 0) {
        return sVar2;
      }
LAB_00778d3a:
      return param_3 - __nbytes;
    }
  } while( true );
}

