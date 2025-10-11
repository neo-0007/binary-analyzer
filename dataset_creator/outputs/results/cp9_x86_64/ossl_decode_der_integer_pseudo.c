
bool ossl_decode_der_integer(undefined8 *param_1,BIGNUM *param_2)

{
  char cVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uchar *local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] != 0) {
    cVar1 = *(char *)*param_1;
    param_1[1] = param_1[1] + -1;
    *param_1 = (char *)*param_1 + 1;
    if (cVar1 == '\x02') {
      iVar2 = ossl_decode_der_length(param_1,&local_28);
      if (iVar2 != 0) {
        if (((local_20 != 0) && (-1 < (char)*local_28)) &&
           ((*local_28 != '\0' || ((local_20 == 1 || ((char)local_28[1] < '\0')))))) {
          pBVar3 = BN_bin2bn(local_28,(int)local_20,param_2);
          bVar4 = pBVar3 != (BIGNUM *)0x0;
          goto LAB_0053864d;
        }
      }
    }
  }
  bVar4 = false;
LAB_0053864d:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

