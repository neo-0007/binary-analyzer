
bool conn_new(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar1 = BIO_CONNECT_new();
  *(long *)(param_1 + 0x40) = lVar1;
  return lVar1 != 0;
}

