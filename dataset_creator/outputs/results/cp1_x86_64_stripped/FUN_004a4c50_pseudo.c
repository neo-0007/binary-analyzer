
/* WARNING: Type propagation algorithm not settling */

int FUN_004a4c50(long *******param_1,undefined8 *param_2,char *param_3,ulong *param_4,char param_5,
                undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long ******pppppplVar6;
  long *******ppppppplVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  long in_FS_OFFSET;
  char *local_70 [2];
  char local_59;
  long *******local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_3;
  if (param_1 != (long *******)0x0) {
    uVar1 = *param_4;
    local_50 = (char *)*param_2;
    uVar8 = (uint)uVar1 & 0xc0;
    ppppppplVar7 = param_1;
    if ((uVar1 & 0x1000) != 0) {
      ppppppplVar7 = (long *******)&local_58;
      local_58 = param_1;
    }
    iVar10 = (int)param_5;
    if ((uVar1 & 6) == 0) {
      if ((uVar1 & 8) == 0) {
        uVar5 = (*(code *)param_4[4])();
        iVar10 = FUN_004a3ef0(ppppppplVar7,&local_50,param_3,uVar5,0xffffffff,0,iVar10,param_6,
                              param_7,param_8,param_9);
        if (iVar10 != 0) goto joined_r0x004a4f96;
        FUN_0051f420();
        uVar5 = 0x2ad;
        iVar10 = 0;
      }
      else {
        uVar2 = param_4[1];
        uVar5 = (*(code *)param_4[4])();
        iVar10 = FUN_004a3ef0(ppppppplVar7,&local_50,param_3,uVar5,uVar2 & 0xffffffff,uVar1 & 0xc0,
                              iVar10,param_6,param_7,param_8,param_9);
        if (iVar10 != 0) {
joined_r0x004a4f96:
          if (iVar10 == -1) {
            iVar10 = -1;
          }
          else {
LAB_004a4f9d:
            *param_2 = local_50;
            iVar10 = 1;
          }
          goto LAB_004a4e93;
        }
        FUN_0051f420();
        uVar5 = 0x2a4;
        iVar10 = 0;
      }
LAB_004a4fc1:
      FUN_0051f540("../crypto/asn1/tasn_dec.c",uVar5,"asn1_template_noexp_d2i");
      FUN_0051f8f0(0xd,0x8010a,0);
      goto LAB_004a4e93;
    }
    if ((uVar1 & 8) == 0) {
      uVar4 = 0x10;
      uVar8 = (uint)uVar1 & 2;
      if ((uVar1 & 2) != 0) {
        uVar8 = 0;
        uVar4 = 0x11;
      }
    }
    else {
      uVar4 = (undefined4)param_4[1];
    }
    iVar10 = FUN_004a2db0(local_70,0,0,&local_59,0,&local_50,param_3,uVar4,uVar8,iVar10,param_6);
    if (iVar10 == 0) {
      FUN_0051f420();
      uVar5 = 0x265;
      goto LAB_004a4fc1;
    }
    if (iVar10 == -1) goto LAB_004a4e93;
    pppppplVar6 = *ppppppplVar7;
    if (pppppplVar6 == (long ******)0x0) {
      pppppplVar6 = (long ******)FUN_00436410();
      *ppppppplVar7 = pppppplVar6;
    }
    else {
      while (iVar10 = FUN_00436480(pppppplVar6), 0 < iVar10) {
        local_48 = FUN_00436020(pppppplVar6);
        uVar5 = (*(code *)param_4[4])();
        FUN_004a6bc0(&local_48,uVar5);
      }
      pppppplVar6 = *ppppppplVar7;
    }
    if (pppppplVar6 == (long ******)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x278,"asn1_template_noexp_d2i");
      FUN_0051f8f0(0xd,0xc0100,0);
    }
    else {
      pcVar9 = local_70[0];
      pcVar3 = local_50;
      do {
        local_50 = pcVar3;
        if ((long)pcVar9 < 1) {
          if (local_59 == '\0') goto LAB_004a4f9d;
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x29b,"asn1_template_noexp_d2i");
          FUN_0051f8f0(0xd,0x89,0);
          goto LAB_004a4e90;
        }
        if (((pcVar9 != (char *)0x1) && (*pcVar3 == '\0')) && (pcVar3[1] == '\0')) {
          local_50 = pcVar3 + 2;
          if (local_59 != '\0') goto LAB_004a4f9d;
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x283,"asn1_template_noexp_d2i");
          FUN_0051f8f0(0xd,0x9f,0);
          goto LAB_004a4e90;
        }
        local_48 = 0;
        uVar5 = (*(code *)param_4[4])();
        iVar10 = FUN_004a3ef0(&local_48,&local_50,pcVar9,uVar5,0xffffffff,0,0,param_6,param_7,
                              param_8,param_9);
        if (iVar10 < 1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x28e,"asn1_template_noexp_d2i");
          uVar5 = 0x8010a;
          goto LAB_004a509c;
        }
        pcVar9 = pcVar3 + ((long)pcVar9 - (long)local_50);
        local_70[0] = pcVar9;
        iVar10 = FUN_00435f80(*ppppppplVar7,local_48);
        pcVar3 = local_50;
      } while (iVar10 != 0);
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x295,"asn1_template_noexp_d2i");
      uVar5 = 0xc0100;
LAB_004a509c:
      FUN_0051f8f0(0xd,uVar5,0);
      uVar5 = (*(code *)param_4[4])();
      FUN_004a6ba0(local_48,uVar5);
    }
  }
LAB_004a4e90:
  iVar10 = 0;
LAB_004a4e93:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar10;
}

