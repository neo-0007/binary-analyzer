
uint FUN_004a6010(long ****param_1,long *param_2,ulong *param_3,int param_4,uint param_5)

{
  long *plVar1;
  ulong uVar2;
  long ***ppplVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ulong local_88;
  uint local_74;
  int local_70;
  uint local_6c;
  long ***local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_3;
  if ((uVar2 & 0x1000) != 0) {
    local_60 = (long ***)param_1;
    param_1 = &local_60;
  }
  local_6c = (uint)uVar2;
  local_88._0_4_ = local_6c & 0x18;
  if ((uVar2 & 0x18) == 0) {
    uVar5 = param_5 & 0xc0;
    if (param_4 == -1) {
      uVar5 = (uint)local_88;
    }
    local_88 = (ulong)uVar5;
LAB_004a6096:
    cVar4 = '\x01';
    uVar5 = param_5 & 0xffffff3f;
    if ((uVar2 & 0x800) != 0) {
      cVar4 = ((param_5 & 0x800) != 0) + '\x01';
    }
    if ((uVar2 & 6) == 0) {
      if ((uVar2 & 0x10) == 0) {
        uVar11 = (*(code *)param_3[4])();
        uVar9 = FUN_004a59a0(param_1,param_2,uVar11,param_4,uVar5 | (uint)local_88);
        if ((uVar9 != 0) || (uVar9 = local_6c & 6, (*param_3 & 1) != 0)) goto LAB_004a61b6;
        FUN_0051f420();
        uVar11 = 0x176;
      }
      else {
        uVar11 = (*(code *)param_3[4])();
        iVar15 = FUN_004a59a0(param_1,0,uVar11,0xffffffff,uVar5);
        if (iVar15 != 0) {
          uVar9 = FUN_004a1f30(cVar4,iVar15,param_4);
          if ((param_2 == (long *)0x0) || (uVar9 == 0xffffffff)) goto LAB_004a61b6;
          FUN_004a1e10(param_2,cVar4,iVar15,param_4,local_88);
          uVar11 = (*(code *)param_3[4])();
          FUN_004a59a0(param_1,param_2,uVar11,0xffffffff,uVar5);
          if (cVar4 != '\x02') goto LAB_004a61b6;
LAB_004a6480:
          FUN_004a1f10(param_2);
          goto LAB_004a61b6;
        }
        uVar9 = local_6c & 6;
        if ((*param_3 & 1) != 0) goto LAB_004a61b6;
        FUN_0051f420();
        uVar11 = 0x161;
      }
LAB_004a6191:
      FUN_0051f540("../crypto/asn1/tasn_enc.c",uVar11,"asn1_template_ex_i2d");
      FUN_0051f8f0(0xd,0xde,0);
    }
    else {
      ppplVar3 = *param_1;
      if (ppplVar3 == (long ***)0x0) {
        uVar9 = 0;
        goto LAB_004a61b6;
      }
      local_74 = local_6c & 2;
      if ((uVar2 & 2) == 0) {
        if ((param_4 == -1) || (local_6c = local_6c & 0x10, (uVar2 & 0x10) != 0)) {
          local_6c = 0;
          local_70 = 0x10;
        }
        else {
          local_74 = (uint)local_88;
          local_70 = param_4;
        }
      }
      else {
        local_74 = local_6c & 4;
        if ((uVar2 & 4) == 0) {
          local_6c = 1;
          if (param_4 == -1) {
            local_70 = 0x11;
          }
          else {
            local_70 = 0x11;
            if ((uVar2 & 0x10) == 0) {
              local_74 = (uint)local_88;
              local_70 = param_4;
            }
          }
        }
        else {
          local_6c = 2;
          if (param_4 == -1) {
            local_74 = 0;
            local_70 = 0x11;
          }
          else {
            bVar16 = (uVar2 & 0x10) == 0;
            local_74 = 0;
            if (bVar16) {
              local_74 = (uint)local_88;
            }
            local_70 = 0x11;
            if (bVar16) {
              local_70 = param_4;
            }
          }
        }
      }
      iVar15 = 0;
      for (iVar8 = 0; iVar6 = FUN_00436480(ppplVar3), iVar8 < iVar6; iVar8 = iVar8 + 1) {
        local_58 = FUN_004364a0(ppplVar3,iVar8);
        uVar11 = (*(code *)param_3[4])();
        iVar6 = FUN_004a59a0(&local_58,0,uVar11,0xffffffff,uVar5);
        if ((iVar6 == -1) || (0x7fffffff - iVar6 < iVar15)) goto LAB_004a61b0;
        if ((iVar6 == 0) && ((*param_3 & 1) == 0)) {
          FUN_0051f420();
          uVar11 = 0x138;
          goto LAB_004a6191;
        }
        iVar15 = iVar15 + iVar6;
      }
      uVar7 = FUN_004a1f30(cVar4,iVar15,local_70);
      if (uVar7 != 0xffffffff) {
        if ((uVar2 & 0x10) == 0) {
          uVar9 = uVar7;
          if (param_2 == (long *)0x0) goto LAB_004a61b6;
        }
        else {
          uVar9 = FUN_004a1f30(cVar4,uVar7,param_4);
          if ((param_2 == (long *)0x0) || (uVar9 == 0xffffffff)) goto LAB_004a61b6;
          FUN_004a1e10(param_2,cVar4,uVar7,param_4,local_88);
        }
        FUN_004a1e10(param_2,cVar4,iVar15,local_70,local_74);
        uVar11 = (*(code *)param_3[4])();
        local_48 = 0;
        if ((local_6c == 0) || (iVar8 = FUN_00436480(ppplVar3), iVar8 < 2)) {
          for (iVar15 = 0; iVar8 = FUN_00436480(ppplVar3), iVar15 < iVar8; iVar15 = iVar15 + 1) {
            local_50 = FUN_004364a0(ppplVar3,iVar15);
            FUN_004a59a0(&local_50,param_2,uVar11,0xffffffff,uVar5);
          }
        }
        else {
          iVar8 = FUN_00436480(ppplVar3);
          plVar12 = (long *)FUN_0041ad90((long)iVar8 * 0x18,"../crypto/asn1/tasn_enc.c",0x1a0);
          if (plVar12 == (long *)0x0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/tasn_enc.c",0x1a3,"asn1_set_seq_out");
            FUN_0051f8f0(0xd,0xc0100,0);
          }
          else {
            lVar13 = FUN_0041ad90((long)iVar15,"../crypto/asn1/tasn_enc.c",0x1a6);
            if (lVar13 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/tasn_enc.c",0x1a8,"asn1_set_seq_out");
              FUN_0051f8f0(0xd,0xc0100,0);
            }
            else {
              plVar14 = plVar12;
              local_48 = lVar13;
              for (iVar15 = 0; iVar8 = FUN_00436480(ppplVar3), iVar15 < iVar8; iVar15 = iVar15 + 1)
              {
                local_50 = FUN_004364a0(ppplVar3,iVar15);
                *plVar14 = local_48;
                uVar10 = FUN_004a59a0(&local_50,&local_48,uVar11,0xffffffff,uVar5);
                *(undefined4 *)(plVar14 + 1) = uVar10;
                plVar14[2] = local_50;
                plVar14 = plVar14 + 3;
              }
              iVar15 = FUN_00436480(ppplVar3);
              FUN_006e8e20(plVar12,(long)iVar15,0x18,&LAB_004a5960);
              local_48 = *param_2;
              plVar14 = plVar12;
              for (iVar15 = 0; iVar8 = FUN_00436480(ppplVar3), iVar15 < iVar8; iVar15 = iVar15 + 1)
              {
                thunk_FUN_00713a50(local_48,*plVar14,(long)(int)plVar14[1]);
                local_48 = (int)plVar14[1] + local_48;
                plVar14 = plVar14 + 3;
              }
              *param_2 = local_48;
              if (local_6c == 2) {
                plVar14 = plVar12;
                for (iVar15 = 0; iVar8 = FUN_00436480(ppplVar3), iVar15 < iVar8; iVar15 = iVar15 + 1
                    ) {
                  plVar1 = plVar14 + 2;
                  plVar14 = plVar14 + 3;
                  FUN_004364d0(ppplVar3,iVar15,*plVar1);
                }
              }
            }
            FUN_0041ad60(plVar12,"../crypto/asn1/tasn_enc.c",0x1cf);
            FUN_0041ad60(lVar13,"../crypto/asn1/tasn_enc.c",0x1d0);
          }
        }
        if ((cVar4 != '\x02') || (FUN_004a1f10(param_2), (uVar2 & 0x10) == 0)) goto LAB_004a61b6;
        goto LAB_004a6480;
      }
    }
  }
  else if (param_4 == -1) {
    param_4 = (int)param_3[1];
    local_88 = uVar2 & 0xc0;
    goto LAB_004a6096;
  }
LAB_004a61b0:
  uVar9 = 0xffffffff;
LAB_004a61b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

