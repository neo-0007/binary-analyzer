
bool FUN_0047b380(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 8) == 1) {
    lVar1 = FUN_00429cb0(param_4,1,param_3,param_3);
    if (lVar1 != 0) {
      lVar2 = FUN_0047c000(lVar1);
      if (lVar2 != 0) {
        uVar3 = FUN_00429f50(lVar1);
        uVar4 = FUN_00429f30(lVar1);
        thunk_FUN_00713a50(param_2,uVar4,uVar3);
      }
      FUN_00429eb0(lVar1);
      return lVar2 != 0;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/seed_src.c",0x6d,"seed_src_generate");
    FUN_0051f8f0(0x39,0xc0100,0);
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/seed_src.c",0x65,"seed_src_generate");
    FUN_0051f8f0(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
  }
  return false;
}

