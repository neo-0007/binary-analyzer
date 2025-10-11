
void __libc_init_secure(void)

{
  __uid_t _Var1;
  __uid_t _Var2;
  uint uVar3;
  __gid_t _Var4;
  __gid_t _Var5;
  
  if (__libc_enable_secure_decided != 0) {
    return;
  }
  _Var1 = geteuid();
  _Var2 = getuid();
  uVar3 = 1;
  if (_Var2 == _Var1) {
    _Var4 = getegid();
    _Var5 = getgid();
    uVar3 = (uint)(_Var5 != _Var4);
  }
  __libc_enable_secure = uVar3;
  return;
}

