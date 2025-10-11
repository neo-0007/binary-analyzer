
undefined8 main(void)

{
  uchar uVar1;
  ctype<char> *this;
  int iVar2;
  ctype<char> cVar3;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  ostream *this_00;
  uchar *out;
  long in_FS_OFFSET;
  int local_fc;
  uchar local_f8 [8];
  char acStack_f0 [8];
  undefined1 local_e8;
  uchar local_d8 [8];
  char acStack_d0 [8];
  undefined1 local_c8;
  uchar local_b8 [136];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  out = local_b8;
  local_f8 = (uchar  [8])s_0123456789abcdefabcdef9876543210_007c4020._0_8_;
  acStack_f0 = (char  [8])s_0123456789abcdefabcdef9876543210_007c4020._8_8_;
  local_c8 = 0;
  local_d8 = (uchar  [8])s_0123456789abcdefabcdef9876543210_007c4020._16_8_;
  acStack_d0 = (char  [8])s_0123456789abcdefabcdef9876543210_007c4020._24_8_;
  ctx = EVP_CIPHER_CTX_new();
  cipher = EVP_aes_128_ctr();
  EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,local_f8,local_d8);
  EVP_EncryptUpdate(ctx,out,&local_fc,(uchar *)"AES CTR Demo!",0xd);
  iVar2 = local_fc;
  EVP_EncryptFinal_ex(ctx,out + local_fc,&local_fc);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Ciphertext: ",0xc);
  if (0 < iVar2 + local_fc) {
    do {
      uVar1 = *out;
      out = out + 1;
      ___printf_chk(1,&DAT_00810b86,uVar1);
    } while (local_b8 + (ulong)((iVar2 + local_fc) - 1) + 1 != out);
  }
  this = *(ctype<char> **)((long)&DAT_00936890 + *(long *)(std::cout + -0x18));
  if (this != (ctype<char> *)0x0) {
    if (this[0x38] == (ctype<char>)0x0) {
      std::ctype<char>::_M_widen_init(this);
      cVar3 = (ctype<char>)0xa;
      if (*(code **)(*(long *)this + 0x30) != std::ctype<char>::do_widen) {
        cVar3 = (ctype<char>)(**(code **)(*(long *)this + 0x30))(this,10);
      }
    }
    else {
      cVar3 = this[0x43];
    }
    this_00 = (ostream *)std::ostream::put((ostream *)&std::cout,(char)cVar3);
    std::ostream::flush(this_00);
    EVP_CIPHER_CTX_free(ctx);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_bad_cast();
}

