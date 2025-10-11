
long FUN_00452e40(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar2 = FUN_0043b840();
  if (iVar2 != 0) {
    lVar3 = FUN_0041aec0(0x1a0,"../providers/implementations/digests/sha3_prov.c",0x14c);
    if (lVar3 != 0) {
      FUN_00435030(lVar3,4,0x100);
      puVar1 = PTR_thunk_FUN_00435160_008f1358;
      *(undefined **)(lVar3 + 400) = PTR_FUN_008f1350;
      *(undefined **)(lVar3 + 0x198) = puVar1;
    }
  }
  return lVar3;
}

