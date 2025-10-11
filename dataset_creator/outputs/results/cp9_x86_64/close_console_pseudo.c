
undefined8 close_console(long param_1)

{
  if (tty_in != (FILE *)stdin) {
    fclose(tty_in);
  }
  if (tty_out != (FILE *)stderr) {
    fclose(tty_out);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x30));
  return 1;
}

