
void evp_pkey_free_legacy(int *param_1)

{
  undefined8 uVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  ENGINE *e;
  long in_FS_OFFSET;
  ENGINE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = *(EVP_PKEY_ASN1_METHOD **)(param_1 + 2);
  local_18 = (ENGINE *)0x0;
  if ((pEVar2 != (EVP_PKEY_ASN1_METHOD *)0x0) ||
     ((e = *(ENGINE **)(param_1 + 10), *(ENGINE **)(param_1 + 10) != (ENGINE *)0x0 &&
      (pEVar2 = EVP_PKEY_asn1_find(&local_18,*param_1), e = local_18,
      pEVar2 != (EVP_PKEY_ASN1_METHOD *)0x0)))) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    if (*(code **)(pEVar2 + 0xa8) != (code *)0x0) {
      (**(code **)(pEVar2 + 0xa8))(param_1);
    }
    param_1[8] = 0;
    param_1[9] = 0;
    e = local_18;
  }
  ENGINE_finish(e);
  ENGINE_finish(*(ENGINE **)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  ENGINE_finish(*(ENGINE **)(param_1 + 6));
  param_1[6] = 0;
  param_1[7] = 0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

