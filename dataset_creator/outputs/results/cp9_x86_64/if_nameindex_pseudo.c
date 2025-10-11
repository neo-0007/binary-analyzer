
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

if_nameindex * if_nameindex(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  if_nameindex *__ptr;
  char *pcVar4;
  if_nameindex *piVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  __ptr = (if_nameindex *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_68 = 0;
  iVar2 = __netlink_open(&local_68);
  if (iVar2 < 0) goto LAB_0076a793;
  iVar2 = __netlink_request(&local_68,0x12);
  if (-1 < iVar2) {
    plVar14 = (long *)local_58._0_8_;
    if ((long *)local_58._0_8_ == (long *)0x0) {
      piVar5 = (if_nameindex *)malloc(0x10);
      __ptr = piVar5;
      if (piVar5 == (if_nameindex *)0x0) goto LAB_0076a7f2;
    }
    else {
      iVar2 = 0;
      plVar12 = (long *)local_58._0_8_;
      do {
        puVar9 = (uint *)plVar12[1];
        uVar6 = plVar12[2];
        if (puVar9 != (uint *)0x0) {
          do {
            if (((uVar6 < 0x10) || (uVar3 = *puVar9, uVar3 < 0x10)) || (uVar6 < uVar3)) break;
            if ((puVar9[3] == local_68._4_4_) && (puVar9[2] == *(uint *)(plVar12 + 3))) {
              if ((short)puVar9[1] == 3) break;
              iVar2 = iVar2 + (uint)((short)puVar9[1] == 0x10);
            }
            uVar10 = (ulong)(uVar3 + 3 & 0xfffffffc);
            uVar6 = uVar6 - uVar10;
            puVar9 = (uint *)((long)puVar9 + uVar10);
          } while( true );
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
      __ptr = (if_nameindex *)malloc((ulong)(iVar2 + 1) << 4);
      if (__ptr == (if_nameindex *)0x0) {
LAB_0076a7f2:
        __ptr = (if_nameindex *)0x0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x69;
        goto LAB_0076a783;
      }
      uVar6 = 0;
      do {
        puVar9 = (uint *)plVar14[1];
        uVar10 = plVar14[2];
        if (puVar9 != (uint *)0x0) {
          do {
            if (((uVar10 < 0x10) || (uVar3 = *puVar9, uVar3 < 0x10)) || (uVar10 < uVar3)) break;
            if ((puVar9[3] == local_68._4_4_) && (puVar9[2] == *(uint *)(plVar14 + 3))) {
              if ((short)puVar9[1] == 3) break;
              if ((short)puVar9[1] == 0x10) {
                puVar13 = puVar9 + 8;
                piVar5 = __ptr + uVar6;
                piVar5->if_index = puVar9[5];
                for (uVar11 = (ulong)uVar3 - 0x20; 3 < uVar11; uVar11 = uVar11 - uVar8) {
                  uVar1 = (ushort)*puVar13;
                  uVar7 = (uint)uVar1;
                  if ((uVar1 < 4) || (uVar11 < uVar7)) break;
                  if (*(ushort *)((long)puVar13 + 2) == 3) {
                    pcVar4 = strndup((char *)(puVar13 + 1),(ulong)uVar7 - 4);
                    piVar5->if_name = pcVar4;
                    if (pcVar4 != (char *)0x0) {
                      uVar3 = *puVar9;
                      uVar6 = (ulong)((int)uVar6 + 1);
                      goto LAB_0076a6b8;
                    }
                    piVar5->if_index = 0;
                    if_freenameindex(__ptr);
                    goto LAB_0076a7f2;
                  }
                  uVar8 = (ulong)(uVar7 + 3 & 0x1fffc);
                  puVar13 = (uint *)((long)puVar13 + uVar8);
                }
                uVar6 = (ulong)((int)uVar6 + 1);
              }
            }
LAB_0076a6b8:
            uVar11 = (ulong)(uVar3 + 3 & 0xfffffffc);
            uVar10 = uVar10 - uVar11;
            puVar9 = (uint *)((long)puVar9 + uVar11);
          } while( true );
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      piVar5 = __ptr + uVar6;
    }
    piVar5->if_index = 0;
    piVar5->if_name = (char *)0x0;
  }
LAB_0076a783:
  __netlink_free_handle(&local_68);
  __netlink_close(&local_68);
LAB_0076a793:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

