
undefined4 _nss_files_setnetgrent(char *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  size_t __n;
  __ssize_t _Var4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  char *__ptr;
  void *__ptr_00;
  long in_FS_OFFSET;
  char *local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != '\0') {
    __stream = (FILE *)__nss_files_fopen("/etc/netgroup");
    if (__stream != (FILE *)0x0) {
      local_50 = (char *)0x0;
      local_48 = 0;
      __n = strlen(param_1);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x20);
LAB_00775420:
      uVar1 = __stream->_flags;
      do {
        if ((uVar1 & 0x10) != 0) {
LAB_00775588:
          free(local_50);
          fclose(__stream);
          uVar3 = 0;
LAB_0077559c:
          free(*(void **)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          goto LAB_007755c3;
        }
        uVar1 = uVar1 & 0x10;
        _Var4 = getline(&local_50,&local_48,__stream);
        __ptr = local_50;
        if (_Var4 < 0) goto LAB_00775588;
        if ((long)__n < _Var4) {
          iVar2 = strncmp(local_50,param_1,__n);
          if ((iVar2 == 0) &&
             ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)__ptr[__n] * 2) & 0x20) != 0))
          {
            __ptr_00 = *(void **)(param_2 + 0x20);
            lVar7 = *(long *)(param_2 + 0x30);
            lVar9 = _Var4 * 2 - __n;
            if (lVar9 < 0x200) {
              lVar9 = 0x200;
            }
            sVar8 = lVar9 + *(long *)(param_2 + 0x28);
            *(size_t *)(param_2 + 0x28) = sVar8;
            pvVar5 = realloc(__ptr_00,sVar8);
            *(void **)(param_2 + 0x20) = pvVar5;
            if (pvVar5 == (void *)0x0) {
LAB_007756e3:
              free(__ptr_00);
              free(local_50);
              fclose(__stream);
              uVar3 = 0xffffffff;
              goto LAB_0077559c;
            }
            pvVar5 = (void *)((lVar7 - (long)__ptr_00) + (long)pvVar5);
            *(void **)(param_2 + 0x30) = pvVar5;
            memcpy(pvVar5,local_50 + __n + 1,_Var4 - __n);
            *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + ((_Var4 - __n) - 1);
            __ptr = local_50;
            if (_Var4 != 1) {
              uVar1 = 1;
              goto LAB_00775535;
            }
LAB_0077560b:
            *(undefined4 *)(param_2 + 0x38) = 1;
            *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x20);
            free(__ptr);
            fclose(__stream);
            uVar3 = 1;
            goto LAB_007755c3;
          }
          if (_Var4 != 1) goto LAB_00775535;
          goto LAB_00775420;
        }
        if (_Var4 < 2) goto LAB_00775420;
LAB_00775535:
        do {
          while( true ) {
            if ((__ptr[_Var4 + -1] != '\n') || (__ptr[_Var4 + -2] != '\\')) {
              if (uVar1 != 0) goto LAB_0077560b;
              goto LAB_00775420;
            }
            if (uVar1 == 0) break;
            *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -2;
            _Var4 = getline(&local_50,&local_48,__stream);
            __ptr = local_50;
            if (_Var4 < 1) goto LAB_0077560b;
            __ptr_00 = *(void **)(param_2 + 0x20);
            lVar9 = *(long *)(param_2 + 0x30);
            lVar7 = _Var4 + 3;
            if (_Var4 < 0x1fd) {
              lVar7 = 0x200;
            }
            sVar8 = lVar7 + *(long *)(param_2 + 0x28);
            *(size_t *)(param_2 + 0x28) = sVar8;
            pvVar5 = realloc(__ptr_00,sVar8);
            *(void **)(param_2 + 0x20) = pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_007756e3;
            puVar6 = (undefined1 *)((long)pvVar5 + (lVar9 - (long)__ptr_00));
            *(undefined1 **)(param_2 + 0x30) = puVar6 + 1;
            *puVar6 = 0x20;
            memcpy(*(void **)(param_2 + 0x30),local_50,_Var4 + 1);
            *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + _Var4;
            __ptr = local_50;
            if (_Var4 == 1) goto LAB_0077560b;
          }
          _Var4 = getline(&local_50,&local_48,__stream);
          if (_Var4 < 1) goto LAB_00775420;
          __ptr = local_50;
        } while (_Var4 != 1);
        uVar1 = __stream->_flags;
      } while( true );
    }
    uVar3 = 0xfffffffe;
    if (*(int *)(in_FS_OFFSET + -0x58) == 0xb) goto LAB_007755c3;
  }
  uVar3 = 0xffffffff;
LAB_007755c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

