
undefined8 * dh_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  DH *pDVar7;
  
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)CRYPTO_zalloc(0x48,"../providers/implementations/exchange/dh_exch.c",0x107)
  ;
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
  pDVar7 = (DH *)param_1[1];
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  if (pDVar7 != (DH *)0x0) {
    iVar3 = DH_up_ref(pDVar7);
    if (iVar3 == 0) goto LAB_00462640;
    pDVar7 = (DH *)param_1[1];
  }
  puVar4[1] = pDVar7;
  pDVar7 = (DH *)param_1[2];
  if (pDVar7 != (DH *)0x0) {
    iVar3 = DH_up_ref(pDVar7);
    if (iVar3 == 0) goto LAB_00462640;
    pDVar7 = (DH *)param_1[2];
  }
  puVar4[2] = pDVar7;
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    iVar3 = EVP_MD_up_ref();
    if (iVar3 == 0) goto LAB_00462640;
    lVar6 = param_1[4];
  }
  puVar4[4] = lVar6;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    lVar6 = CRYPTO_memdup(param_1[5],param_1[6],"../providers/implementations/exchange/dh_exch.c",
                          0x123);
    puVar4[5] = lVar6;
    if (lVar6 == 0) goto LAB_00462640;
  }
  if ((char *)param_1[8] == (char *)0x0) {
    return puVar4;
  }
  pcVar5 = CRYPTO_strdup((char *)param_1[8],"../providers/implementations/exchange/dh_exch.c",0x12a)
  ;
  puVar4[8] = pcVar5;
  if (pcVar5 != (char *)0x0) {
    return puVar4;
  }
LAB_00462640:
  dh_freectx(puVar4);
  return (undefined8 *)0x0;
}

