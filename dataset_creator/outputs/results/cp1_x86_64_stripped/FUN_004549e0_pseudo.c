
uint FUN_004549e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,code *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  int local_54c;
  long *local_548;
  long local_540;
  undefined8 *local_538;
  ulong local_530;
  undefined4 *local_528;
  long local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined1 local_448 [1032];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_548 = (long *)0x0;
  local_540 = 0;
  local_538 = (undefined8 *)0x0;
  lVar3 = FUN_0043bf50(*param_1);
  if (lVar3 != 0) {
    uVar2 = 1;
    iVar1 = FUN_0049e110(lVar3,&local_548);
    FUN_004ab560(lVar3);
    if (-1 < iVar1) {
      lVar3 = local_548[1];
      lVar7 = *local_548;
      local_540 = lVar3;
      FUN_0041ad60(local_548,"../providers/implementations/encode_decode/decode_epki2pki.c",0x55);
      FUN_0051f000();
      lVar4 = FUN_004a93e0(0,&local_540,lVar7);
      if (lVar4 == 0) {
        FUN_0051f050();
      }
      else {
        local_530 = 0;
        FUN_0051f1a0();
        iVar1 = (*param_6)(local_448,0x400,&local_530,0,param_7);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/encode_decode/decode_epki2pki.c",0x60,
                       "epki2pki_decode");
          FUN_0051f8f0(0x39,0x9f,0);
          uVar2 = 0;
        }
        else {
          local_520 = 0;
          local_54c = 0;
          FUN_004a9480(lVar4,&local_538,&local_528);
          uVar5 = FUN_00485290(*param_1);
          lVar6 = FUN_0055bc10(local_538,local_448,local_530 & 0xffffffff,
                               *(undefined8 *)(local_528 + 2),*local_528,&local_520,&local_54c,0,
                               uVar5,0);
          if (lVar6 != 0) {
            FUN_0041ad60(lVar3,"../providers/implementations/encode_decode/decode_epki2pki.c",0x6e);
            lVar7 = (long)local_54c;
            lVar3 = local_520;
          }
          uVar2 = (uint)(lVar6 != 0);
          local_538 = (undefined8 *)0x0;
        }
        FUN_004a9460(lVar4);
      }
      FUN_0051f000();
      local_540 = lVar3;
      lVar4 = FUN_004a2bb0(0,&local_540,lVar7);
      FUN_0051f050();
      if (lVar4 != 0) {
        iVar1 = FUN_004a2cd0(0,0,0,&local_538,lVar4);
        if (iVar1 != 0) {
          local_520 = CONCAT44(local_520._4_4_,2);
          FUN_00423e90(local_448,0x32,*local_538,0);
          FUN_0041e290(&local_588,"data-type",local_448,0);
          local_518 = local_588;
          uStack_510 = uStack_580;
          local_508 = local_578;
          uStack_500 = uStack_570;
          local_4f8 = local_568;
          FUN_0041e290(&local_588,"data-structure","PrivateKeyInfo",0);
          local_4d0 = local_568;
          local_4f0 = local_588;
          uStack_4e8 = uStack_580;
          local_4e0 = local_578;
          uStack_4d8 = uStack_570;
          FUN_0041e2e0(&local_588,"data",lVar3,lVar7);
          local_4c8 = local_588;
          uStack_4c0 = uStack_580;
          local_4b8 = local_578;
          uStack_4b0 = uStack_570;
          local_4a8 = local_568;
          FUN_0041cea0(&local_588,"type",&local_520);
          local_480 = local_568;
          local_4a0 = local_588;
          uStack_498 = uStack_580;
          local_490 = local_578;
          uStack_488 = uStack_570;
          FUN_0041e470(&local_588);
          local_458 = local_568;
          local_478 = local_588;
          uStack_470 = uStack_580;
          local_468 = local_578;
          uStack_460 = uStack_570;
          uVar2 = (*param_4)(&local_518,param_5);
        }
      }
      FUN_004a2c30(lVar4);
      FUN_0041ad60(lVar3,"../providers/implementations/encode_decode/decode_epki2pki.c",0x95);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

