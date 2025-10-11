
bool FUN_004679d0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00485290(*param_1);
  if (param_2 == 0) {
    return true;
  }
  iVar1 = FUN_0043caf0(param_1 + 2,param_2,0,0,0,uVar2);
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
      uVar2 = FUN_0053f2e0();
      iVar1 = FUN_0053f6c0(uVar2,&DAT_007d37c9);
      if (iVar1 == 0) {
        uVar2 = FUN_0053f2e0(param_1[2]);
        iVar1 = FUN_0053f6c0(uVar2,"CMAC");
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0x128,"kbkdf_set_ctx_params");
          FUN_0051f8f0(0x39,0x97,0);
          return false;
        }
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"mode");
    if (lVar3 != 0) {
      iVar1 = FUN_0041ca00("counter",*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        iVar1 = FUN_0041ca00("feedback",*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18))
        ;
        if (iVar1 != 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0x134,"kbkdf_set_ctx_params");
          FUN_0051f8f0(0x39,0x7d,0);
          return false;
        }
        *(undefined4 *)(param_1 + 1) = 1;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"key");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041aef0(param_1[3],param_1[4],"../providers/implementations/kdfs/kbkdf.c",0x112);
      param_1[3] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 3,0,param_1 + 4);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"salt");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041aef0(param_1[5],param_1[6],"../providers/implementations/kdfs/kbkdf.c",0x112);
      param_1[5] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 5,0,param_1 + 6);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041aef0(param_1[7],param_1[8],"../providers/implementations/kdfs/kbkdf.c",0x112);
      param_1[7] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 7,0,param_1 + 8);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"seed");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041aef0(param_1[9],param_1[10],"../providers/implementations/kdfs/kbkdf.c",0x112);
      param_1[9] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 9,0,param_1 + 10);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"use-l");
    if (((lVar3 == 0) || (iVar1 = thunk_FUN_0041cf60(lVar3,param_1 + 0xb), iVar1 != 0)) &&
       ((lVar3 = thunk_FUN_0041cdd0(param_2,"use-separator"), lVar3 == 0 ||
        (iVar1 = thunk_FUN_0041cf60(lVar3,(long)param_1 + 0x5c), iVar1 != 0)))) {
      if ((param_1[2] != 0) && (param_1[4] != 0)) {
        iVar1 = FUN_0053f310(param_1[2],param_1[3],param_1[4],0);
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}

