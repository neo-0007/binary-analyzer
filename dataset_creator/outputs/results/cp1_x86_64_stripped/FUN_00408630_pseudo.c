
long FUN_00408630(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4,char *param_5,
                 char *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_80 [2];
  long local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80[0] = param_2;
  lVar3 = FUN_00417730(*param_1,0,&DAT_008dd2c0);
  lVar4 = FUN_00418710(*param_1);
  local_70 = 0;
  pcVar5 = "";
  if (param_6 != (char *)0x0) {
    pcVar5 = param_6;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_fetch.c",0x100,"inner_evp_generic_fetch");
    FUN_0051f8f0(6,0x80106,0);
    lVar3 = 0;
    goto LAB_00408962;
  }
  if ((int)param_3 < 1) {
    FUN_0051f420();
    uVar6 = 0x109;
  }
  else {
    if ((param_5 == (char *)0x0) || (param_4 == 0)) {
      bVar8 = param_5 != (char *)0x0;
      if ((param_4 != 0) || (!bVar8)) {
        if (param_4 != 0) goto LAB_00408714;
LAB_00408765:
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
        local_68 = FUN_004081d0;
        *(uint *)(param_1 + 1) = param_3;
        local_60 = FUN_00408320;
        local_58 = FUN_00408210;
        local_50 = FUN_00408160;
        local_48 = FUN_00408150;
        *(int *)((long)param_1 + 0xc) = param_4;
        param_1[3] = pcVar5;
        param_1[2] = param_5;
        param_1[6] = param_7;
        param_1[7] = param_8;
        param_1[8] = param_9;
        local_70 = FUN_00417f90(*param_1,param_3,local_80,0,&local_68,param_1);
        if (local_70 == 0) {
          bVar8 = bVar8 || param_4 != 0;
LAB_0040899d:
          bVar1 = *(byte *)(param_1 + 5);
          lVar3 = local_70;
          if (!bVar8) goto LAB_00408962;
        }
        else {
          if (param_4 == 0) {
            param_4 = FUN_00418920(lVar4,param_5);
            if (param_4 - 1U < 0x7fffff) goto LAB_00408820;
            if (param_4 == 0) goto LAB_0040899d;
            uVar7 = 0;
          }
          else if (param_4 - 1U < 0x7fffff) {
LAB_00408820:
            uVar7 = param_4 << 8 | param_3;
            if (0xfe < param_3 - 1) {
              uVar7 = 0;
            }
          }
          else {
            uVar7 = 0;
          }
          FUN_00425e00(lVar3,local_80[0],uVar7,pcVar5,local_70,param_8,param_9);
          bVar1 = *(byte *)(param_1 + 5);
        }
        uVar7 = ~(uint)bVar1 & 1;
      }
      else {
        param_4 = FUN_00418920(lVar4,param_5);
        if (param_4 == 0) goto LAB_00408765;
LAB_00408714:
        if ((0x7ffffe < param_4 - 1U) || (0xfe < param_3 - 1)) {
          FUN_0051f420();
          uVar6 = 0x123;
          goto LAB_00408941;
        }
        iVar2 = FUN_00425d20(lVar3,local_80[0],param_4 << 8 | param_3,pcVar5,&local_70);
        if (iVar2 == 0) goto LAB_00408765;
        uVar7 = 0;
      }
      lVar3 = local_70;
      if (local_70 == 0) {
        if (param_5 == (char *)0x0) {
          param_5 = (char *)FUN_00418400(lVar4,param_4,0);
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_fetch.c",0x15d,"inner_evp_generic_fetch");
        if (param_6 == (char *)0x0) {
          param_6 = "<null>";
        }
        if (param_5 == (char *)0x0) {
          param_5 = "<null>";
        }
        uVar6 = FUN_00417a80(*param_1);
        FUN_0051f8f0(6,0x8010d - uVar7,"%s, Algorithm (%s : %d), Properties (%s)",uVar6,param_5,
                     param_4,param_6);
        lVar3 = local_70;
      }
      goto LAB_00408962;
    }
    FUN_0051f420();
    uVar6 = 0x112;
  }
LAB_00408941:
  FUN_0051f540("../crypto/evp/evp_fetch.c",uVar6,"inner_evp_generic_fetch");
  FUN_0051f8f0(6,0xc0103,0);
  lVar3 = 0;
LAB_00408962:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

