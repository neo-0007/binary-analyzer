
undefined8 __inet_pton_length(int param_1,char *param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__dest;
  ushort *__src;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  char *pcVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 local_38 [16];
  ushort local_28 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = inet_pton4(param_2,param_2 + param_3,param_4);
      return uVar4;
    }
    goto LAB_0076db44;
  }
  if (param_1 == 10) {
    puVar8 = (ushort *)local_38;
    pcVar1 = param_2 + param_3;
    local_38 = (undefined1  [16])0x0;
    if ((pcVar1 == param_2) ||
       ((pcVar5 = param_2, *param_2 == ':' &&
        ((pcVar5 = param_2 + 1, pcVar1 == pcVar5 || (param_2[1] != ':')))))) {
LAB_0076dab0:
      uVar4 = 0;
    }
    else {
      if (pcVar5 < pcVar1) {
        __src = (ushort *)0x0;
        uVar3 = 0;
        lVar10 = 0;
        pcVar9 = pcVar5;
LAB_0076d9ce:
        do {
          cVar2 = *pcVar5;
          iVar6 = (int)cVar2;
          pcVar5 = pcVar5 + 1;
          if ((byte)(cVar2 - 0x30U) < 10) {
            uVar7 = iVar6 - 0x30;
LAB_0076da05:
            if ((lVar10 == 4) || (uVar3 = uVar3 << 4 | uVar7, 0xffff < uVar3)) goto LAB_0076dab0;
            lVar10 = lVar10 + 1;
          }
          else {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              uVar7 = iVar6 - 0x57;
              goto LAB_0076da05;
            }
            if ((byte)(cVar2 + 0xbfU) < 6) {
              uVar7 = iVar6 - 0x37;
              goto LAB_0076da05;
            }
            if (iVar6 != 0x3a) {
              if ((iVar6 != 0x2e) || (local_28 < puVar8 + 2)) goto LAB_0076dab0;
              iVar6 = inet_pton4(pcVar9,pcVar1,puVar8);
              puVar8 = puVar8 + 2;
              if (0 < iVar6) goto LAB_0076da43;
              uVar4 = 0;
              goto LAB_0076d93e;
            }
            pcVar9 = pcVar5;
            if (lVar10 != 0) {
              if ((pcVar1 == pcVar5) || (local_28 < puVar8 + 1)) goto LAB_0076dab0;
              lVar10 = 0;
              *puVar8 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
              uVar3 = 0;
              puVar8 = puVar8 + 1;
              goto LAB_0076d9ce;
            }
            bVar11 = __src != (ushort *)0x0;
            __src = puVar8;
            if (bVar11) goto LAB_0076dab0;
          }
        } while (pcVar1 != pcVar5);
        if (lVar10 != 0) {
          if (local_28 < puVar8 + 1) goto LAB_0076dab0;
          *puVar8 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
          puVar8 = puVar8 + 1;
        }
LAB_0076da43:
        if (__src == (ushort *)0x0) goto LAB_0076db2c;
        if (local_28 == puVar8) goto LAB_0076dab0;
        __dest = (void *)((long)local_28 - ((long)puVar8 - (long)__src));
        memmove(__dest,__src,(long)puVar8 - (long)__src);
        memset(__src,0,(long)__dest - (long)__src);
      }
      else {
LAB_0076db2c:
        if (local_28 != puVar8) {
          uVar4 = 0;
          goto LAB_0076d93e;
        }
      }
      uVar4 = 1;
      *param_4 = local_38._0_8_;
      param_4[1] = local_38._8_8_;
    }
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    uVar4 = 0xffffffff;
  }
LAB_0076d93e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_0076db44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

