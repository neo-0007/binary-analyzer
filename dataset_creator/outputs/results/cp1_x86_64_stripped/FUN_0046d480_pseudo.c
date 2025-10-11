
undefined8 FUN_0046d480(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  uVar2 = FUN_00485290(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FUN_0043c6f0(param_1 + 1,param_2,uVar2);
  if (iVar1 != 0) {
    lVar3 = thunk_FUN_0041cdd0(param_2,"secret");
    if ((((lVar3 != 0) || (lVar3 = thunk_FUN_0041cdd0(param_2,"key"), lVar3 != 0)) &&
        (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      FUN_0041ad60(param_1[4],"../providers/implementations/kdfs/x942kdf.c",0x179);
      param_1[4] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 4,0,param_1 + 5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"acvp-info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      FUN_0041ad60(param_1[6],"../providers/implementations/kdfs/x942kdf.c",0x179);
      param_1[6] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 6,0,param_1 + 7);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"partyu-info");
    if (((lVar3 != 0) || (lVar3 = thunk_FUN_0041cdd0(param_2,&DAT_007e431f), lVar3 != 0)) &&
       ((*(long *)(lVar3 + 0x18) != 0 && (*(long *)(lVar3 + 0x10) != 0)))) {
      FUN_0041ad60(param_1[8],"../providers/implementations/kdfs/x942kdf.c",0x179);
      param_1[8] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 8,0,param_1 + 0xc);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"partyv-info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      FUN_0041ad60(param_1[9],"../providers/implementations/kdfs/x942kdf.c",0x179);
      param_1[9] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 9,0,param_1 + 0xd);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"use-keybits");
    if ((lVar3 == 0) || (iVar1 = thunk_FUN_0041cf60(lVar3,param_1 + 0x13), iVar1 != 0)) {
      lVar3 = thunk_FUN_0041cdd0(param_2,"supp-pubinfo");
      if (lVar3 != 0) {
        if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
          FUN_0041ad60(param_1[10],"../providers/implementations/kdfs/x942kdf.c",0x179);
          param_1[10] = 0;
          iVar1 = FUN_0041e150(lVar3,param_1 + 10,0,param_1 + 0xe);
          if (iVar1 == 0) {
            return 0;
          }
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
      lVar3 = thunk_FUN_0041cdd0(param_2,"supp-privinfo");
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
        FUN_0041ad60(param_1[0xb],"../providers/implementations/kdfs/x942kdf.c",0x179);
        param_1[0xb] = 0;
        iVar1 = FUN_0041e150(lVar3,param_1 + 0xb,0,param_1 + 0xf);
        if (iVar1 == 0) {
          return 0;
        }
      }
      lVar3 = thunk_FUN_0041cdd0(param_2,"cekalg");
      if (lVar3 == 0) {
        return 1;
      }
      if (*(int *)(lVar3 + 8) == 4) {
        lVar4 = thunk_FUN_0041cdd0(param_2,"properties");
        if (lVar4 == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          uVar6 = uVar5;
        }
        lVar3 = FUN_00537960(uVar2,uVar6,uVar5);
        if (lVar3 != 0) {
          lVar4 = 0;
          ppuVar7 = &PTR_s_AES_128_WRAP_00929820;
          iVar1 = FUN_0040a400(lVar3,"AES-128-WRAP");
          while( true ) {
            if (iVar1 != 0) {
              FUN_00537a40(lVar3);
              param_1[0x11] = (&PTR_DAT_00929828)[lVar4 * 4];
              param_1[0x12] = *(undefined8 *)(&UNK_00929830 + lVar4 * 0x20);
              param_1[0x10] = *(undefined8 *)(&UNK_00929838 + lVar4 * 0x20);
              return 1;
            }
            lVar4 = lVar4 + 1;
            ppuVar7 = ppuVar7 + 4;
            if (lVar4 == 4) break;
            iVar1 = FUN_0040a400(lVar3,*ppuVar7);
          }
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x5d,"find_alg_id");
        FUN_0051f8f0(0x39,0x91,0);
        FUN_00537a40(lVar3);
      }
    }
  }
  return 0;
}

