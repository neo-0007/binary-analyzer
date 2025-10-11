
undefined8 pkey_rsa_init(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)CRYPTO_zalloc(0x58,"../crypto/rsa/rsa_pmeth.c",0x40);
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = *(int **)(param_1 + 0x78);
    *puVar3 = 0x800;
    puVar3[4] = 2;
    iVar1 = *piVar2;
    *(undefined8 *)(puVar3 + 0xc) = 0xfffffffffffffffe;
    puVar3[0x14] = 1;
    puVar3[7] = (uint)(iVar1 == 0x390) * 5 + 1;
    *(undefined4 **)(param_1 + 0x98) = puVar3;
    *(undefined4 **)(param_1 + 0x68) = puVar3 + 5;
    *(undefined4 *)(param_1 + 0x70) = 2;
    return 1;
  }
  return 0;
}

