
undefined8 _Unwind_RaiseException(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_RDX;
  undefined8 *puVar4;
  long in_SSP;
  undefined8 unaff_retaddr;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  long local_318;
  undefined8 *puStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  ulong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8 [4];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228;
  undefined8 *puStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8;
  int aiStack_1c0 [82];
  code *local_78;
  long local_60;
  undefined8 local_38;
  
  local_38 = param_3;
  uw_init_context_1(&local_3a8,&stack0x00000008,unaff_retaddr);
  local_2b8[0] = local_3a8;
  local_2b8[1] = uStack_3a0;
  local_2b8[2] = local_398;
  local_2b8[3] = uStack_390;
  local_298 = local_388;
  uStack_290 = uStack_380;
  local_288 = local_378;
  uStack_280 = uStack_370;
  local_278 = local_368;
  uStack_270 = uStack_360;
  local_268 = local_358;
  uStack_260 = uStack_350;
  local_258 = local_348;
  uStack_250 = uStack_340;
  local_248 = local_338;
  uStack_240 = uStack_330;
  local_238 = local_328;
  uStack_230 = uStack_320;
  local_228 = local_318;
  puStack_220 = puStack_310;
  local_218 = local_308;
  uStack_210 = uStack_300;
  local_208 = local_2f8;
  uStack_200 = uStack_2f0;
  local_1f8 = local_2e8;
  uStack_1f0 = uStack_2e0;
  local_1e8 = local_2d8;
  uStack_1e0 = uStack_2d0;
  local_1d8 = local_2c8;
  uStack_1d0 = uStack_2c0;
  puVar4 = puStack_220;
  while( true ) {
    do {
      do {
        puStack_220 = puVar4;
        uVar3 = uw_frame_state_for(local_2b8,&local_1c8);
        if ((int)uVar3 == 5) {
          return uVar3;
        }
        if ((int)uVar3 != 0) {
          return 3;
        }
        if (local_78 != (code *)0x0) {
          iVar1 = (*local_78)(1,1,*param_1,param_1,local_2b8);
          if (iVar1 == 6) {
            param_1[2] = 0;
            local_2b8[0] = local_3a8;
            local_2b8[1] = uStack_3a0;
            local_268 = local_358;
            uStack_260 = uStack_350;
            local_2b8[2] = local_398;
            local_2b8[3] = uStack_390;
            param_1[3] = local_228 + ((long)local_1f8 >> 0x3f);
            local_298 = local_388;
            uStack_290 = uStack_380;
            local_258 = local_348;
            uStack_250 = uStack_340;
            local_288 = local_378;
            uStack_280 = uStack_370;
            local_248 = local_338;
            uStack_240 = uStack_330;
            local_278 = local_368;
            uStack_270 = uStack_360;
            local_238 = local_328;
            uStack_230 = uStack_320;
            local_228 = local_318;
            puStack_220 = puStack_310;
            local_218 = local_308;
            uStack_210 = uStack_300;
            local_208 = local_2f8;
            uStack_200 = uStack_2f0;
            local_1f8 = local_2e8;
            uStack_1f0 = uStack_2e0;
            local_1e8 = local_2d8;
            uStack_1e0 = uStack_2d0;
            local_1d8 = local_2c8;
            uStack_1d0 = uStack_2c0;
            uVar3 = _Unwind_RaiseException_Phase2(param_1,local_2b8,&local_1c8);
            if ((int)uVar3 == 7) {
              uVar3 = uw_install_context_1(&local_3a8,local_2b8);
              puVar4 = puStack_220;
              _Unwind_DebugHook(local_228,puStack_220,uVar3);
              if (in_SSP != 0) {
                for (; 0xff < local_1c8; local_1c8 = local_1c8 - 0xff) {
                }
              }
              *(undefined8 **)(&stack0x00000000 + extraout_RDX) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x006c39cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (**(code **)(&stack0x00000000 + extraout_RDX))();
              return uVar3;
            }
            return uVar3;
          }
          if (iVar1 != 8) {
            return 3;
          }
        }
        uw_update_context_1(local_2b8,&local_1c8);
        puVar4 = (undefined8 *)0x0;
      } while (aiStack_1c0[local_60 * 4] == 6);
      if (0x11 < (int)local_60) goto _Unwind_RaiseException_cold;
      lVar2 = (long)(int)local_60;
    } while (((local_1f8 & 0x4000000000000000) != 0) &&
            (puVar4 = (undefined8 *)local_2b8[lVar2], *(char *)((long)&uStack_1e0 + lVar2) != '\0'))
    ;
    if ((&dwarf_reg_size_table)[lVar2] != '\b') break;
    puVar4 = *(undefined8 **)local_2b8[lVar2];
  }
_Unwind_RaiseException_cold:
                    /* WARNING: Subroutine does not return */
  abort();
}

