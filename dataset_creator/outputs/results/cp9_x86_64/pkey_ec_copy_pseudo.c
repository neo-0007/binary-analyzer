
undefined8 pkey_ec_copy(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  EC_GROUP *pEVar4;
  EC_KEY *pEVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = pkey_ec_init();
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_2 + 0x98);
  if ((EC_GROUP *)*puVar2 != (EC_GROUP *)0x0) {
    pEVar4 = EC_GROUP_dup((EC_GROUP *)*puVar2);
    *puVar1 = pEVar4;
    if (pEVar4 == (EC_GROUP *)0x0) {
      return 0;
    }
  }
  pEVar5 = (EC_KEY *)puVar2[2];
  puVar1[1] = puVar2[1];
  if (pEVar5 != (EC_KEY *)0x0) {
    pEVar5 = EC_KEY_dup(pEVar5);
    puVar1[2] = pEVar5;
    if (pEVar5 == (EC_KEY *)0x0) {
      return 0;
    }
  }
  *(undefined1 *)((long)puVar1 + 0x19) = *(undefined1 *)((long)puVar2 + 0x19);
  lVar6 = puVar2[5];
  uVar7 = puVar2[6];
  puVar1[4] = puVar2[4];
  puVar1[7] = puVar2[7];
  if (lVar6 == 0) {
    puVar1[5] = 0;
  }
  else {
    lVar6 = CRYPTO_memdup(lVar6,uVar7,"../crypto/ec/ec_pmeth.c",0x55);
    puVar1[5] = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    uVar7 = puVar2[6];
  }
  puVar1[6] = uVar7;
  return 1;
}

