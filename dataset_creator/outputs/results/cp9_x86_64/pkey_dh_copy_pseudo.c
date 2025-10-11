
undefined8 pkey_dh_copy(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  long lVar5;
  
  iVar3 = pkey_dh_init();
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x98);
    puVar2 = *(undefined4 **)(param_2 + 0x98);
    *puVar1 = *puVar2;
    puVar1[3] = puVar2[3];
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[4] = puVar2[4];
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar2 + 6);
    puVar1[8] = puVar2[8];
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(puVar2 + 0xb);
    pAVar4 = OBJ_dup(*(ASN1_OBJECT **)(puVar2 + 0xc));
    *(ASN1_OBJECT **)(puVar1 + 0xc) = pAVar4;
    if (pAVar4 != (ASN1_OBJECT *)0x0) {
      lVar5 = *(long *)(puVar2 + 0x10);
      *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar2 + 0xe);
      if (lVar5 != 0) {
        lVar5 = CRYPTO_memdup(lVar5,*(undefined8 *)(puVar2 + 0x12),"../crypto/dh/dh_pmeth.c",0x6c);
        *(long *)(puVar1 + 0x10) = lVar5;
        if (lVar5 == 0) {
          return 0;
        }
        *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar2 + 0x12);
      }
      *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar2 + 0x14);
      return 1;
    }
  }
  return 0;
}

