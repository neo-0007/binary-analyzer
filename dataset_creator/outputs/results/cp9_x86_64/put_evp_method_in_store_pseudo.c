
undefined1  [16]
put_evp_method_in_store
          (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
          undefined8 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  size_t sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  sVar7 = 0;
  if (param_4 != (char *)0x0) {
    pcVar4 = strchr(param_4,0x3a);
    sVar7 = (long)pcVar4 - (long)param_4;
    if (pcVar4 == (char *)0x0) {
      sVar7 = strlen(param_4);
    }
  }
  auVar8 = ossl_namemap_stored(*param_6);
  uVar6 = auVar8._8_8_;
  if (auVar8._0_8_ != 0) {
    iVar3 = ossl_namemap_name2num_n(auVar8._0_8_,param_4,sVar7);
    uVar6 = extraout_RDX;
    if (iVar3 != 0) {
      uVar6 = (ulong)(iVar3 - 1U);
      uVar1 = *(uint *)(param_6 + 1);
      if ((iVar3 - 1U < 0x7fffff) && (uVar5 = uVar1 - 1, uVar6 = (ulong)uVar5, uVar5 < 0xff)) {
        if (param_1 == 0) {
          auVar8 = ossl_lib_ctx_get_data(*param_6,0,evp_method_store_method);
          uVar6 = auVar8._8_8_;
          param_1 = auVar8._0_8_;
          if (param_1 == 0) goto LAB_0040cdd9;
        }
        uVar2 = param_6[8];
        auVar9._0_8_ = ossl_method_store_add
                                 (param_1,param_3,uVar1 | iVar3 << 8,param_5,param_2,param_6[7]);
        auVar9._8_8_ = uVar2;
        return auVar9;
      }
    }
  }
LAB_0040cdd9:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar6;
  return auVar8 << 0x40;
}

