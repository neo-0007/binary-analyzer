
bool FUN_004820d0(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  lVar2 = FUN_0041aec0(*(undefined8 *)(param_1 + 0x170),
                       "../providers/implementations/signature/sm2_sig.c",0x104);
  if (lVar2 != 0) {
    iVar1 = FUN_00590a10(lVar2,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x178),
                         *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_00405f60(*(undefined8 *)(param_1 + 0x168),lVar2,*(undefined8 *)(param_1 + 0x170));
      bVar3 = iVar1 != 0;
      goto LAB_0048212c;
    }
  }
  bVar3 = false;
LAB_0048212c:
  FUN_0041ad60(lVar2,"../providers/implementations/signature/sm2_sig.c",0x10a);
  return bVar3;
}

