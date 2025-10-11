
int __res_context_mkquery
              (long *param_1,uint param_2,char *param_3,uint param_4,uint param_5,char *param_6,
              ushort *param_7,int param_8)

{
  ulong uVar1;
  int iVar2;
  u_char *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  long in_FS_OFFSET;
  timespec local_f8;
  ushort *local_e8;
  undefined8 local_e0;
  u_char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_4 | param_5) < 0x10000) && (param_7 != (ushort *)0x0)) && (0xb < param_8)) {
    param_7[0] = 0;
    param_7[1] = 0;
    param_7[2] = 0;
    param_7[3] = 0;
    param_7[4] = 0;
    param_7[5] = 0;
    clock_gettime(1,&local_f8);
    *param_7 = (ushort)((uint)local_f8.tv_nsec ^ (uint)local_f8.tv_sec) ^
               (ushort)(((uint)local_f8.tv_nsec ^ (uint)local_f8.tv_sec) >> 8);
    *(byte *)(param_7 + 1) = (byte)param_7[1] & 0x87 | (byte)((param_2 & 0xf) << 3);
    uVar1 = *(ulong *)(*param_1 + 8);
    if ((uVar1 & 0x4000000) != 0) {
      *(byte *)((long)param_7 + 3) = *(byte *)((long)param_7 + 3) | 0x20;
    }
    local_e8 = param_7;
    local_e0 = 0;
    param_7[1] = (ushort)(uVar1 >> 6) & 1 | param_7[1] & 0xf0fe;
    uVar8 = (ushort)param_5;
    uVar7 = (ushort)param_4;
    if (param_2 == 0) {
      if (-1 < param_8 + -0x10) {
        iVar6 = ns_name_compress(param_3,(u_char *)(param_7 + 6),(long)(param_8 + -0x10),
                                 (u_char **)&local_e8,&local_48);
        if (-1 < iVar6) {
          puVar4 = (ushort *)((long)iVar6 + (long)(param_7 + 6));
          *puVar4 = uVar8 << 8 | uVar8 >> 8;
          puVar4[1] = uVar7 << 8 | uVar7 >> 8;
          param_7[2] = 0x100;
          iVar6 = ((int)puVar4 + 4) - (int)param_7;
          goto LAB_007bf1af;
        }
      }
    }
    else {
      iVar6 = -1;
      if (param_2 != 4) goto LAB_007bf1af;
      iVar6 = 4;
      if (param_6 != (char *)0x0) {
        iVar6 = 0xe;
      }
      iVar6 = (param_8 + -0xc) - iVar6;
      if (-1 < iVar6) {
        iVar2 = ns_name_compress(param_3,(u_char *)(param_7 + 6),(long)iVar6,(u_char **)&local_e8,
                                 &local_48);
        if (-1 < iVar2) {
          uVar7 = uVar7 << 8 | uVar7 >> 8;
          puVar5 = (ushort *)((long)iVar2 + (long)(param_7 + 6));
          *puVar5 = uVar8 << 8 | uVar8 >> 8;
          puVar4 = puVar5 + 2;
          puVar5[1] = uVar7;
          param_7[2] = 0x100;
          if (param_6 != (char *)0x0) {
            iVar6 = ns_name_compress(param_6,(u_char *)puVar4,(long)(iVar6 - iVar2),
                                     (u_char **)&local_e8,&local_48);
            if (iVar6 < 0) goto LAB_007bf250;
            puVar3 = (u_char *)((long)iVar6 + (long)puVar4);
            puVar3[0] = '\0';
            puVar3[1] = '\n';
            puVar4 = (ushort *)(puVar3 + 10);
            *(ushort *)(puVar3 + 2) = uVar7;
            puVar3[4] = '\0';
            puVar3[5] = '\0';
            puVar3[6] = '\0';
            puVar3[7] = '\0';
            puVar3[8] = '\0';
            puVar3[9] = '\0';
            param_7[5] = 0x100;
          }
          iVar6 = (int)puVar4 - (int)param_7;
          goto LAB_007bf1af;
        }
      }
    }
  }
LAB_007bf250:
  iVar6 = -1;
LAB_007bf1af:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

