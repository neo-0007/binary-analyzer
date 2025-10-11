
undefined8 FUN_00477ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  lVar1 = thunk_FUN_0041cdd0(param_2,"key");
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) == 0x20) {
      FUN_00565700(param_1 + 8,*(undefined8 *)(lVar1 + 0x10));
      return 1;
    }
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../providers/implementations/macs/poly1305_prov.c",0x54,"poly1305_setkey");
    FUN_0051f8f0(0x39,0x69,0);
  }
  return uVar2;
}

