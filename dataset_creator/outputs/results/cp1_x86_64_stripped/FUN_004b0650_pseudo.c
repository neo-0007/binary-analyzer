
undefined8 FUN_004b0650(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != 0)) {
    uVar2 = FUN_006fdc50(param_2,1,(long)param_3,*(undefined8 *)(param_1 + 0x40));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = FUN_007021c0(*(undefined8 *)(param_1 + 0x40));
    if (iVar1 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_file.c",0x94,"file_read");
      puVar3 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar3,"calling fread()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_file.c",0x96,"file_read");
      FUN_0051f8f0(0x20,0x80002,0);
      return 0xffffffff;
    }
  }
  return 0;
}

