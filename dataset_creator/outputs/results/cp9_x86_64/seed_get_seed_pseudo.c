
undefined1  [16]
seed_get_seed(undefined8 param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined1 auVar7 [16];
  
  if ((-1 < param_3) && (uVar6 = (ulong)(param_3 + 7 >> 3), param_4 < uVar6)) {
    param_4 = uVar6;
  }
  if (param_5 < param_4) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/seed_src.c",0xc3,"seed_get_seed");
    ERR_set_error(0x39,0xba,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_RDX_00;
    return auVar2 << 0x40;
  }
  lVar5 = CRYPTO_secure_malloc(param_4,"../providers/implementations/rands/seed_src.c",199);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/seed_src.c",0xc9,"seed_get_seed");
    ERR_set_error(0x39,0xc0100,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = extraout_RDX_01;
    return auVar3 << 0x40;
  }
  iVar4 = seed_src_generate(param_1,lVar5,param_4,0,param_6,param_7);
  if (iVar4 != 0) {
    *param_2 = lVar5;
    auVar7._8_8_ = param_8;
    auVar7._0_8_ = param_4;
    return auVar7;
  }
  CRYPTO_secure_clear_free(lVar5,param_4,"../providers/implementations/rands/seed_src.c",0xd1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = extraout_RDX;
  return auVar1 << 0x40;
}

