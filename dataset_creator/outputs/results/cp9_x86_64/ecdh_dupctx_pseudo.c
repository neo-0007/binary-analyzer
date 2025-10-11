
undefined8 * ecdh_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  EC_KEY *pEVar6;
  
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)
           CRYPTO_zalloc(0x40,"../providers/implementations/exchange/ecdh_exch.c",0xb6);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = param_1[1];
  *puVar4 = *param_1;
  puVar4[1] = uVar1;
  uVar1 = param_1[3];
  puVar4[2] = param_1[2];
  puVar4[3] = uVar1;
  uVar1 = param_1[5];
  puVar4[4] = param_1[4];
  puVar4[5] = uVar1;
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  puVar4[1] = 0;
  pEVar6 = (EC_KEY *)param_1[1];
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  if (pEVar6 != (EC_KEY *)0x0) {
    iVar3 = EC_KEY_up_ref(pEVar6);
    if (iVar3 == 0) goto LAB_004631a0;
    pEVar6 = (EC_KEY *)param_1[1];
  }
  puVar4[1] = pEVar6;
  pEVar6 = (EC_KEY *)param_1[2];
  if (pEVar6 != (EC_KEY *)0x0) {
    iVar3 = EC_KEY_up_ref(pEVar6);
    if (iVar3 == 0) goto LAB_004631a0;
    pEVar6 = (EC_KEY *)param_1[2];
  }
  puVar4[2] = pEVar6;
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    iVar3 = EVP_MD_up_ref();
    if (iVar3 == 0) goto LAB_004631a0;
    lVar5 = param_1[4];
  }
  puVar4[4] = lVar5;
  if (param_1[5] == 0) {
    return puVar4;
  }
  if (param_1[6] == 0) {
    return puVar4;
  }
  lVar5 = CRYPTO_memdup(param_1[5],param_1[6],"../providers/implementations/exchange/ecdh_exch.c",
                        0xd6);
  puVar4[5] = lVar5;
  if (lVar5 != 0) {
    return puVar4;
  }
LAB_004631a0:
  ecdh_freectx(puVar4);
  return (undefined8 *)0x0;
}

