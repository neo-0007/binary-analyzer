
int FUN_0041f700(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  ulong *puVar5;
  code *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  char *local_60;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  lVar11 = *(long *)(param_1 + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar11 == 0) {
    local_50 = (int *)0x0;
    local_48 = 0;
    if ((*param_1 & 1) != 0) {
      FUN_0051f420();
      pcVar7 = "provider_init";
      uVar9 = 0x343;
LAB_0041faf1:
      iVar3 = -1;
      FUN_0051f540("../crypto/provider_core.c",uVar9,pcVar7);
      FUN_0051f8f0(0xf,0xc0103,0);
      goto LAB_0041f75a;
    }
    pcVar6 = *(code **)(param_1 + 0x40);
    if (pcVar6 == (code *)0x0) {
      lVar11 = *(long *)(param_1 + 0x38);
      if (lVar11 != 0) {
LAB_0041fa7d:
        pcVar6 = (code *)FUN_004dadd0(lVar11,"OSSL_provider_init");
        *(code **)(param_1 + 0x40) = pcVar6;
LAB_0041fa90:
        if (pcVar6 != (code *)0x0) goto LAB_0041f840;
        goto LAB_0041fa99;
      }
      lVar11 = thunk_FUN_004dabe0();
      *(long *)(param_1 + 0x38) = lVar11;
      if (lVar11 != 0) {
        lVar11 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
        if (lVar11 == 0) {
          FUN_0051f420();
          pcVar7 = "get_provider_store";
          uVar9 = 0x154;
          goto LAB_0041faf1;
        }
        iVar3 = FUN_004222a0(*(undefined8 *)(lVar11 + 0x18));
        if (iVar3 == 0) goto LAB_0041fa20;
        if (*(long *)(lVar11 + 0x28) == 0) {
          FUN_004222e0(*(undefined8 *)(lVar11 + 0x18));
          local_60 = (char *)thunk_FUN_006e8f20("OPENSSL_MODULES");
          pcVar7 = (char *)0x0;
          if (local_60 == (char *)0x0) {
            local_60 = "/usr/lib/x86_64-linux-gnu/ossl-modules";
          }
        }
        else {
          pcVar7 = (char *)FUN_0041c2c0(*(long *)(lVar11 + 0x28),"../crypto/provider_core.c",0x361);
          FUN_004222e0(*(undefined8 *)(lVar11 + 0x18));
          local_60 = pcVar7;
          if (pcVar7 == (char *)0x0) {
            FUN_0051f420();
            iVar3 = -1;
            FUN_0051f540("../crypto/provider_core.c",0x364,"provider_init");
            FUN_0051f8f0(0xf,0xc0100,0);
            goto LAB_0041f75a;
          }
        }
        FUN_004daeb0(*(undefined8 *)(param_1 + 0x38),2,2,0);
        lVar11 = 0;
        lVar8 = *(long *)(param_1 + 0x30);
        if (*(long *)(param_1 + 0x30) == 0) {
          lVar10 = 0;
          lVar11 = FUN_004db3d0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
          lVar8 = lVar11;
          if (lVar11 != 0) goto LAB_0041fbbf;
LAB_0041fc7b:
          FUN_004daaa0(*(undefined8 *)(param_1 + 0x38));
          param_1[0x38] = 0;
          param_1[0x39] = 0;
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
        }
        else {
LAB_0041fbbf:
          lVar8 = FUN_004db360(*(undefined8 *)(param_1 + 0x38),lVar8,local_60);
          lVar10 = lVar11;
          if ((lVar8 == 0) ||
             (lVar11 = FUN_004db100(*(undefined8 *)(param_1 + 0x38),lVar8,0,0), lVar11 == 0))
          goto LAB_0041fc7b;
        }
        FUN_0041ad60(lVar8,"../crypto/provider_core.c",0x382);
        FUN_0041ad60(lVar10,"../crypto/provider_core.c",899);
        FUN_0041ad60(pcVar7,"../crypto/provider_core.c",900);
        lVar11 = *(long *)(param_1 + 0x38);
        if (lVar11 != 0) goto LAB_0041fa7d;
        pcVar6 = *(code **)(param_1 + 0x40);
        goto LAB_0041fa90;
      }
    }
    else {
LAB_0041f840:
      iVar3 = (*pcVar6)(param_1,&DAT_0091b300,&local_50,&local_48);
      if (iVar3 == 0) {
LAB_0041fa99:
        FUN_0051f420();
        FUN_0051f540("../crypto/provider_core.c",0x391,"provider_init");
        iVar3 = -1;
        FUN_0051f8f0(0xf,0xc0105,"name=%s",*(undefined8 *)(param_1 + 0x28));
        goto LAB_0041f75a;
      }
      pcVar6 = (code *)0x0;
      iVar3 = *local_50;
      *(int **)(param_1 + 0xd8) = local_50;
      *(undefined8 *)(param_1 + 0xd0) = local_48;
      piVar2 = local_50;
      if (iVar3 != 0) {
        do {
          local_50 = piVar2 + 4;
          switch(iVar3) {
          case 0x400:
            *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x401:
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x402:
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x403:
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x404:
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x405:
            pcVar6 = *(code **)(piVar2 + 2);
            break;
          case 0x406:
            *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(piVar2 + 2);
            break;
          case 0x407:
            *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(piVar2 + 2);
          }
          iVar3 = *local_50;
          piVar2 = local_50;
        } while (iVar3 != 0);
        if (pcVar6 != (code *)0x0) {
          puVar4 = (uint *)(*pcVar6)();
          uVar1 = *puVar4;
          if (uVar1 == 0) {
            lVar8 = 0x20;
            lVar11 = 1;
          }
          else {
            lVar8 = 0;
            do {
              lVar11 = lVar8;
              if (((int)uVar1 < 0) || ((uVar1 & 0x7f800000) != 0)) goto LAB_0041fa20;
              lVar8 = lVar11 + 1;
              uVar1 = puVar4[lVar8 * 4];
            } while (uVar1 != 0);
            lVar11 = lVar11 + 2;
            lVar8 = lVar8 * 0x10 + 0x20;
          }
          puVar5 = (ulong *)FUN_0041aec0(lVar8,"../crypto/provider_core.c",0x3d8);
          *(ulong **)(param_1 + 0x68) = puVar5;
          if (puVar5 == (ulong *)0x0) goto LAB_0041fa20;
          lVar8 = 0;
          *puVar5 = (ulong)((*(uint *)(param_1 + 0x60) & 0xff) << 0x17);
          puVar5[1] = *(ulong *)(param_1 + 0x28);
          do {
            *(long *)((long)puVar5 + lVar8 + 0x10) = (long)*(int *)((long)puVar4 + lVar8);
            *(undefined8 *)((long)puVar5 + lVar8 + 0x18) = *(undefined8 *)((long)puVar4 + lVar8 + 8)
            ;
            lVar8 = lVar8 + 0x10;
          } while (lVar11 << 4 != lVar8);
          FUN_0051dc30();
        }
      }
      *param_1 = *param_1 | 1;
      if ((((param_1[200] & 1) == 0) || (param_3 == 0)) ||
         (iVar3 = FUN_0041f170(param_1,1), iVar3 != 0)) {
        *param_1 = *param_1 | 2;
        iVar3 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = iVar3;
        goto LAB_0041f75a;
      }
    }
  }
  else {
    if (((param_1[200] & 1) == 0) || (param_3 == 0)) {
      if (param_2 == 0) goto LAB_0041f741;
LAB_0041f7a0:
      iVar3 = FUN_004222a0(*(undefined8 *)(lVar11 + 0x20));
      if (iVar3 == 0) {
LAB_0041fc44:
        if ((param_3 != 0) && ((param_1[200] & 1) != 0)) {
          FUN_0041f1e0(param_1,1);
        }
        goto LAB_0041fa20;
      }
      iVar3 = FUN_004222c0(*(undefined8 *)(param_1 + 8));
      if (iVar3 == 0) {
        FUN_004222e0(*(undefined8 *)(lVar11 + 0x20));
        goto LAB_0041fc44;
      }
      *param_1 = *param_1 | 2;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 1) {
        FUN_004222e0(*(undefined8 *)(param_1 + 8));
        FUN_004222e0(*(undefined8 *)(lVar11 + 0x20));
        goto LAB_0041f75a;
      }
      iVar3 = FUN_0041f510(param_1);
      FUN_004222e0(*(undefined8 *)(param_1 + 8));
      FUN_004222e0(*(undefined8 *)(lVar11 + 0x20));
    }
    else {
      iVar3 = FUN_0041f170(param_1,1);
      if (iVar3 == 0) goto LAB_0041fa20;
      if (param_2 != 0) goto LAB_0041f7a0;
LAB_0041f741:
      *param_1 = *param_1 | 2;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 1) goto LAB_0041f75a;
      iVar3 = FUN_0041f510(param_1);
    }
    if (iVar3 != 0) {
      iVar3 = 1;
      goto LAB_0041f75a;
    }
  }
LAB_0041fa20:
  iVar3 = -1;
LAB_0041f75a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

