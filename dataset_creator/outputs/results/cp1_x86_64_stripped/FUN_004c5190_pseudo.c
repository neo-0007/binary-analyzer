
ulong FUN_004c5190(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if (param_2 <= uVar1) {
    if (param_1[1] != 0) {
      thunk_FUN_00713720(param_1[1] + param_2,0,uVar1 - param_2);
    }
LAB_004c520f:
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    thunk_FUN_00713720(param_1[1] + uVar1,0,param_2 - uVar1);
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 < 0x5ffffffd) {
    uVar1 = ((param_2 + 3) / 3) * 4;
    if ((param_1[3] & 1) == 0) {
      uVar2 = FUN_0041af40(param_1[1],param_1[2],uVar1,"../crypto/buffer/buffer.c",0x87);
    }
    else {
      uVar2 = FUN_004c4f00(param_1,uVar1);
    }
    if (uVar2 != 0) {
      param_1[1] = uVar2;
      param_1[2] = uVar1;
      thunk_FUN_00713720(uVar2 + *param_1,0,param_2 - *param_1);
      goto LAB_004c520f;
    }
    FUN_0051f420();
    uVar3 = 0x89;
  }
  else {
    FUN_0051f420();
    uVar3 = 0x80;
  }
  FUN_0051f540("../crypto/buffer/buffer.c",uVar3,"BUF_MEM_grow_clean");
  FUN_0051f8f0(7,0xc0100,0);
  return 0;
}

