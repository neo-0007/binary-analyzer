
long CTLOG_STORE_get0_log_by_id(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar3);
    iVar1 = bcmp((void *)(lVar2 + 0x18),param_2,param_3);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return lVar2;
}

