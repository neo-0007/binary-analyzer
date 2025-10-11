
void * _dl_sysdep_read_whole_file(undefined8 param_1,size_t *param_2,int param_3)

{
  int __fd;
  int iVar1;
  void *pvVar2;
  stat sStack_b8;
  
  __fd = __open64_nocancel(param_1,0x80000);
  if (-1 < __fd) {
    iVar1 = fstat(__fd,&sStack_b8);
    if ((iVar1 < 0) || (*param_2 = sStack_b8.st_size, sStack_b8.st_size == 0)) {
      pvVar2 = (void *)0xffffffffffffffff;
    }
    else {
      pvVar2 = mmap64((void *)0x0,sStack_b8.st_size,param_3,2,__fd,0);
    }
    __close_nocancel(__fd);
    return pvVar2;
  }
  return (void *)0xffffffffffffffff;
}

