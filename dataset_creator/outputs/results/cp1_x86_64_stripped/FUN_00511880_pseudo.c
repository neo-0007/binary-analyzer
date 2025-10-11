
undefined8 FUN_00511880(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_00415850(param_2);
  if ((0x20000000000001U >> ((ulong)(param_3 - 0x40a) & 0x3f) & 1) == 0) {
    cVar1 = (param_3 != 0x40b) * '\x02' + '\x01';
  }
  else {
    cVar1 = (param_3 != 0x40a) * '\x02';
  }
  lVar4 = FUN_00511460(*(undefined8 *)(param_2 + 8),cVar1,0,*(undefined8 *)(param_2 + 0x10));
  if (lVar4 != 0) {
    iVar2 = FUN_00510c40(lVar4,param_1,1);
    if (iVar2 != 0) {
      iVar2 = FUN_0040f1c0(uVar3,param_3,lVar4);
      if (iVar2 != 0) {
        return 1;
      }
    }
    FUN_00511590(lVar4);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecx_meth.c",0x18b,"ecx_generic_import_from");
  FUN_0051f8f0(5,0xc0100,0);
  return 0;
}

