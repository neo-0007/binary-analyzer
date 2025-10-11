
ulong enc_read(BIO *param_1,uchar *param_2,int param_3)

{
  int *out;
  int *data;
  int iVar1;
  uint inl;
  int iVar2;
  int iVar3;
  int *outl;
  BIO *b;
  uchar *puVar4;
  uchar *out_00;
  EVP_CIPHER_CTX *ctx;
  uint inl_00;
  uint uVar5;
  ulong __n;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (uchar *)0x0) {
    outl = (int *)BIO_get_data(param_1);
    b = BIO_next(param_1);
    if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
      __n = 0;
      out_00 = param_2;
      if (0 < *outl) {
        iVar3 = *outl - outl[1];
        if (param_3 < iVar3) {
          iVar3 = param_3;
        }
        __n = (ulong)iVar3;
        out_00 = param_2 + __n;
        param_3 = param_3 - iVar3;
        memcpy(param_2,(void *)((long)outl + (long)outl[1] + 0x30),__n);
        iVar1 = outl[1];
        outl[1] = iVar1 + iVar3;
        if (iVar1 + iVar3 == *outl) {
          outl[0] = 0;
          outl[1] = 0;
        }
      }
      iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)(outl + 6));
      iVar3 = 0;
      if (iVar1 != 1) {
        iVar3 = iVar1;
      }
      if (0 < param_3) {
        out = outl + 0xc;
        do {
          while( true ) {
            if (outl[2] < 1) goto LAB_005f2e60;
            puVar4 = *(uchar **)(outl + 8);
            if (puVar4 != *(uchar **)(outl + 10)) break;
            data = outl + 0x54;
            *(int **)(outl + 8) = data;
            *(int **)(outl + 10) = data;
            inl = BIO_read(b,data,0x1000);
            if (0 < (int)inl) {
              puVar4 = *(uchar **)(outl + 8);
              *(long *)(outl + 10) = *(long *)(outl + 10) + (long)(int)inl;
              goto LAB_005f2c80;
            }
LAB_005f2d86:
            iVar1 = BIO_test_flags(b,8);
            if (iVar1 != 0) {
              if ((int)__n != 0) {
                BIO_clear_flags(param_1,0xf);
                BIO_copy_next_retry(param_1);
                goto LAB_005f2de3;
              }
              __n = (ulong)inl;
              goto LAB_005f2e60;
            }
            outl[2] = inl;
            iVar2 = EVP_CipherFinal_ex(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)out,outl);
            outl[1] = 0;
            iVar1 = *outl;
            outl[4] = iVar2;
            puVar4 = out_00;
LAB_005f2d21:
            if (param_3 <= iVar1) {
              iVar1 = param_3;
            }
            if (iVar1 < 1) goto LAB_005f2e60;
            out_00 = puVar4 + iVar1;
            memcpy(puVar4,out,(long)iVar1);
            outl[1] = iVar1;
            __n = (ulong)(uint)((int)__n + iVar1);
            param_3 = param_3 - iVar1;
LAB_005f2d53:
            if (param_3 < 1) goto LAB_005f2e60;
          }
          inl = (int)*(uchar **)(outl + 10) - (int)puVar4;
          if ((int)inl < 1) goto LAB_005f2d86;
LAB_005f2c80:
          ctx = *(EVP_CIPHER_CTX **)(outl + 6);
          if (param_3 < 0x101) {
LAB_005f2ce8:
            if (0x100 < (int)inl) {
              inl = 0x100;
            }
            iVar1 = EVP_CipherUpdate(ctx,(uchar *)out,outl,puVar4,inl);
            if (iVar1 != 0) {
              iVar1 = *outl;
              outl[2] = 1;
              *(long *)(outl + 8) = *(long *)(outl + 8) + (long)(int)inl;
              puVar4 = out_00;
              if (iVar1 != 0) goto LAB_005f2d21;
              goto LAB_005f2d53;
            }
            BIO_clear_flags(param_1,0xf);
            outl[4] = 0;
            goto LAB_005f2de0;
          }
          uVar5 = param_3 - iVar3;
          inl_00 = inl;
          if ((int)uVar5 <= (int)inl) {
            inl_00 = uVar5;
          }
          iVar1 = EVP_CipherUpdate(ctx,out_00,&local_44,puVar4,inl_00);
          if (iVar1 == 0) {
            __n = 0;
            BIO_clear_flags(param_1,0xf);
            goto LAB_005f2de3;
          }
          inl = inl - uVar5;
          __n = (ulong)(uint)((int)__n + local_44);
          out_00 = out_00 + local_44;
          param_3 = param_3 - local_44;
          if (0 < (int)inl) {
            puVar4 = (uchar *)((long)(int)uVar5 + *(long *)(outl + 8));
            ctx = *(EVP_CIPHER_CTX **)(outl + 6);
            *(uchar **)(outl + 8) = puVar4;
            goto LAB_005f2ce8;
          }
          *(undefined8 *)(outl + 8) = *(undefined8 *)(outl + 10);
        } while (0 < param_3);
      }
LAB_005f2e60:
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      if ((int)__n == 0) {
        __n = (ulong)(uint)outl[2];
      }
      goto LAB_005f2de3;
    }
  }
LAB_005f2de0:
  __n = 0;
LAB_005f2de3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __n & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

