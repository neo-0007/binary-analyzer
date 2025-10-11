
long FUN_00452c40(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar2 = FUN_0043b840();
  if (iVar2 != 0) {
    lVar3 = FUN_0041aec0(0x1a0,"../providers/implementations/digests/sha3_prov.c",0x142);
    if (lVar3 != 0) {
      FUN_00434fc0(lVar3,6,0x180);
      puVar1 = PTR_thunk_FUN_00435160_008f1358;
      *(undefined **)(lVar3 + 400) = PTR_FUN_008f1350;
      *(undefined **)(lVar3 + 0x198) = puVar1;
    }
  }
  return lVar3;
}

