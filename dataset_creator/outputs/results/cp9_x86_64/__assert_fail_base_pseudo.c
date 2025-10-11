
void __assert_fail_base(char *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                       undefined1 *param_5)

{
  uint uVar1;
  uint *__addr;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  uint local_3c;
  char *local_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pthread_setcancelstate(1,(int *)0x0);
  pcVar4 = ": ";
  if (param_5 == (undefined1 *)0x0) {
    pcVar4 = "";
    param_5 = &DAT_008343a2;
  }
  pcVar6 = ": ";
  if (*program_invocation_short_name == '\0') {
    pcVar6 = "";
  }
  iVar3 = asprintf(&local_38,param_1,program_invocation_short_name,pcVar6,param_3,(ulong)param_4,
                   param_5,pcVar4,param_2,&local_3c);
  if (iVar3 < 0) {
    write(2,"Unexpected error.\n",0x12);
  }
  else {
    __fxprintf(0,&DAT_007d9761,local_38);
    fflush((FILE *)stderr);
    local_3c = local_3c + (int)_dl_pagesize + 4 & -(int)_dl_pagesize;
    puVar5 = (uint *)mmap64((void *)0x0,(long)(int)local_3c,3,0x22,-1,0);
    puVar2 = __abort_msg;
    if (puVar5 != (uint *)0xffffffffffffffff) {
      *puVar5 = local_3c;
      strcpy((char *)(puVar5 + 1),local_38);
      __addr = __abort_msg;
      LOCK();
      UNLOCK();
      puVar2 = puVar5;
      if (__abort_msg != (uint *)0x0) {
        uVar1 = *__abort_msg;
        __abort_msg = puVar5;
        munmap(__addr,(ulong)uVar1);
        __assert_fail_base_cold();
        return;
      }
    }
    __abort_msg = puVar2;
    free(local_38);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

