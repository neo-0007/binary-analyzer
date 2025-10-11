
int inet_pton(int __af,char *__cp,void *__buf)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  void *__dest;
  char *pcVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  ushort *__src;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 local_48 [16];
  ushort local_38 [4];
  long local_30;
  
  puVar6 = (ushort *)local_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(__cp);
  if (__af == 2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar7 = inet_pton4(__cp,__cp + sVar2,__buf);
      return iVar7;
    }
    goto LAB_0076ddc3;
  }
  if (__af == 10) {
    pcVar3 = __cp + sVar2;
    local_48 = (undefined1  [16])0x0;
    if ((__cp == pcVar3) ||
       ((pcVar5 = __cp, *__cp == ':' && ((pcVar5 = __cp + 1, pcVar3 == pcVar5 || (__cp[1] != ':'))))
       )) {
LAB_0076dd30:
      iVar7 = 0;
    }
    else {
      if (pcVar5 < pcVar3) {
        __src = (ushort *)0x0;
        uVar4 = 0;
        lVar10 = 0;
        puVar6 = (ushort *)local_48;
        pcVar9 = pcVar5;
LAB_0076dc6c:
        do {
          cVar1 = *pcVar5;
          iVar7 = (int)cVar1;
          pcVar5 = pcVar5 + 1;
          if ((byte)(cVar1 - 0x30U) < 10) {
            uVar8 = iVar7 - 0x30;
LAB_0076dc9f:
            if ((lVar10 == 4) || (uVar4 = uVar4 << 4 | uVar8, 0xffff < uVar4)) goto LAB_0076dd30;
            lVar10 = lVar10 + 1;
          }
          else {
            if ((byte)(cVar1 + 0x9fU) < 6) {
              uVar8 = iVar7 - 0x57;
              goto LAB_0076dc9f;
            }
            if ((byte)(cVar1 + 0xbfU) < 6) {
              uVar8 = iVar7 - 0x37;
              goto LAB_0076dc9f;
            }
            if (iVar7 != 0x3a) {
              if ((iVar7 != 0x2e) || (local_38 < puVar6 + 2)) goto LAB_0076dd30;
              iVar7 = inet_pton4(pcVar9,pcVar3,puVar6);
              puVar6 = puVar6 + 2;
              if (0 < iVar7) goto LAB_0076dcd9;
              iVar7 = 0;
              goto LAB_0076dbdb;
            }
            pcVar9 = pcVar5;
            if (lVar10 != 0) {
              if ((pcVar3 == pcVar5) || (local_38 < puVar6 + 1)) goto LAB_0076dd30;
              lVar10 = 0;
              *puVar6 = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
              uVar4 = 0;
              puVar6 = puVar6 + 1;
              goto LAB_0076dc6c;
            }
            bVar11 = __src != (ushort *)0x0;
            __src = puVar6;
            if (bVar11) goto LAB_0076dd30;
          }
        } while (pcVar3 != pcVar5);
        if (lVar10 != 0) {
          if (local_38 < puVar6 + 1) goto LAB_0076dd30;
          *puVar6 = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
          puVar6 = puVar6 + 1;
        }
LAB_0076dcd9:
        if (__src == (ushort *)0x0) goto LAB_0076ddab;
        if (local_38 == puVar6) goto LAB_0076dd30;
        __dest = (void *)((long)local_38 - ((long)puVar6 - (long)__src));
        memmove(__dest,__src,(long)puVar6 - (long)__src);
        memset(__src,0,(long)__dest - (long)__src);
      }
      else {
LAB_0076ddab:
        if (local_38 != puVar6) {
          iVar7 = 0;
          goto LAB_0076dbdb;
        }
      }
      iVar7 = 1;
      *(undefined8 *)__buf = local_48._0_8_;
      *(undefined8 *)((long)__buf + 8) = local_48._8_8_;
    }
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    iVar7 = -1;
  }
LAB_0076dbdb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
LAB_0076ddc3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

