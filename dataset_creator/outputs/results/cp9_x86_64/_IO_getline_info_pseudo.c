
undefined1 *
_IO_getline_info(_IO_FILE *param_1,undefined1 *param_2,ulong param_3,int param_4,int param_5,
                undefined4 *param_6)

{
  char *__s;
  int iVar1;
  char *pcVar2;
  ulong __n;
  size_t __n_00;
  undefined1 *puVar3;
  
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_1->_mode == 0) {
    param_1->_mode = -1;
  }
  puVar3 = param_2;
  if (param_3 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    do {
      while( true ) {
        __s = param_1->_IO_read_ptr;
        __n = (long)param_1->_IO_read_end - (long)__s;
        if (0 < (long)__n) break;
        iVar1 = __uflow(param_1);
        if (iVar1 == -1) {
          if (param_6 == (undefined4 *)0x0) {
            return puVar3 + -(long)param_2;
          }
          *param_6 = 0xffffffff;
          return puVar3 + -(long)param_2;
        }
        if (param_4 == iVar1) {
          if (param_5 < 1) {
            if (param_5 != 0) {
              _IO_sputbackc(param_1,param_4);
            }
          }
          else {
            *puVar3 = (char)param_4;
            puVar3 = puVar3 + 1;
          }
          goto LAB_006f49b0;
        }
        param_3 = param_3 - 1;
        *puVar3 = (char)iVar1;
        puVar3 = puVar3 + 1;
        if (param_3 == 0) goto LAB_006f49b0;
      }
      if (param_3 < __n) {
        __n = param_3;
      }
      pcVar2 = (char *)memchr(__s,param_4,__n);
      if (pcVar2 != (char *)0x0) {
        __n_00 = (long)pcVar2 - (long)__s;
        if (-1 < param_5) {
          pcVar2 = pcVar2 + 1;
          __n_00 = (__n_00 + 1) - (ulong)(param_5 == 0);
        }
        memcpy(puVar3,__s,__n_00);
        param_1->_IO_read_ptr = pcVar2;
        return puVar3 + (__n_00 - (long)param_2);
      }
      param_3 = param_3 - __n;
      memcpy(puVar3,__s,__n);
      puVar3 = puVar3 + __n;
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + __n;
    } while (param_3 != 0);
LAB_006f49b0:
    puVar3 = puVar3 + -(long)param_2;
  }
  return puVar3;
}

