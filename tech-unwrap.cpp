#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <math.h>
#include <iostream>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;

class XCtr
{
public:
  int a_d = 0;
  int b_d = 0;
  int c_d = 0;
  int d_d = 0;
  int e_d = 0;
  int f_d = 0;
  int g_d = 0;
  int h_d = 0;
  int i_d = 0;
  int j_d = 0;
  int k_d = 0;
  int l_d = 0;
  int m_d = 0;
  int n_d = 0;
  int o_d = 0;
  int p_d = 0;
  int q_d = 0;
  int r_d = 0;
  int s_d = 0;
  int t_d = 0;
  int u_d = 0;
  int v_d = 0;
  int w_d = 0;
  int x_d = 0;
  int y_d = 0;
  int z_d = 0;
  int nk_1_d = 0;
  int nk_2_d = 0;
  int nk_3_d = 0;
  int nk_4_d = 0;
  int nk_5_d = 0;
  int nk_6_d = 0;
  int nk_7_d = 0;
  int nk_8_d = 0;
  int nk_9_d = 0;
  int nk_0_d = 0;
  int a_d_times = 0;
  int b_d_times = 0;
  int c_d_times = 0;
  int d_d_times = 0;
  int e_d_times = 0;
  int f_d_times = 0;
  int g_d_times = 0;
  int h_d_times = 0;
  int i_d_times = 0;
  int j_d_times = 0;
  int k_d_times = 0;
  int l_d_times = 0;
  int m_d_times = 0;
  int n_d_times = 0;
  int o_d_times = 0;
  int p_d_times = 0;
  int q_d_times = 0;
  int r_d_times = 0;
  int s_d_times = 0;
  int t_d_times = 0;
  int u_d_times = 0;
  int v_d_times = 0;
  int w_d_times = 0;
  int x_d_times = 0;
  int y_d_times = 0;
  int z_d_times = 0;
  int nk_1_d_times = 0;
  int nk_2_d_times = 0;
  int nk_3_d_times = 0;
  int nk_4_d_times = 0;
  int nk_5_d_times = 0;
  int nk_6_d_times = 0;
  int nk_7_d_times = 0;
  int nk_8_d_times = 0;
  int nk_9_d_times = 0;
  int nk_0_d_times = 0;
  // alt
  int alt_d = 0;
  int alt_d_times = 0;
  // backspace
  int backspace_d = 0;
  int backspace_d_times = 0;
  // big_bracket
  int big_bracket_d = 0;
  int big_bracket_d_times = 0;
  // sharp_bracket
  int sharp_bracket_d = 0;
  int sharp_bracket_d_times = 0;
  // blank
  int blank_d = 0;
  int blank_d_times = 0;
  // capslock_off
  int capslock_off_d = 0;
  int capslock_off_d_times = 0;
  // capslock_on
  int capslock_on_d = 0;
  int capslock_on_d_times = 0;
  // ctrl
  int ctrl_d = 0;
  int ctrl_d_times = 0;
  // delete
  int delete_d = 0;
  int delete_d_times = 0;
  // enter
  int enter_d = 0;
  int enter_d_times = 0;
  // exit
  int exit_d = 0;
  int exit_d_times = 0;
  // quotation_mark
  int quotation_mark_d = 0;
  int quotation_mark_d_times = 0;
  // semicolon
  int semicolon_d = 0;
  int semicolon_d_times = 0;
  // shift
  int shift_d = 0;
  int shift_d_times = 0;
  // splash
  int splash_d = 0;
  int splash_d_times = 0;
  // tab
  int tab_d = 0;
  int tab_d_times = 0;
  // windows
  int windows_d = 0;
  int windows_d_times = 0;

  int tilde_d = 0;
  int tilde_d_times = 0;
  int hyphen_d = 0;
  int hyphen_d_times = 0;
  int add_d = 0;
  int add_d_times = 0;
  int up_d = 0;
  int up_d_times = 0;
  int right_d = 0;
  int right_d_times = 0;
  int down_d = 0;
  int down_d_times = 0;
  int left_d = 0;
  int left_d_times = 0;
  int home_d = 0;
  int home_d_times = 0;
  int end_d = 0;
  int end_d_times = 0;
  void zero_all()
  {
    this->a_d = 0;
    this->b_d = 0;
    this->c_d = 0;
    this->d_d = 0;
    this->e_d = 0;
    this->f_d = 0;
    this->g_d = 0;
    this->h_d = 0;
    this->i_d = 0;
    this->j_d = 0;
    this->k_d = 0;
    this->l_d = 0;
    this->m_d = 0;
    this->n_d = 0;
    this->o_d = 0;
    this->p_d = 0;
    this->q_d = 0;
    this->r_d = 0;
    this->s_d = 0;
    this->t_d = 0;
    this->u_d = 0;
    this->v_d = 0;
    this->w_d = 0;
    this->x_d = 0;
    this->y_d = 0;
    this->z_d = 0;
    this->nk_1_d = 0;
    this->nk_2_d = 0;
    this->nk_3_d = 0;
    this->nk_4_d = 0;
    this->nk_5_d = 0;
    this->nk_6_d = 0;
    this->nk_7_d = 0;
    this->nk_8_d = 0;
    this->nk_9_d = 0;
    this->nk_0_d = 0;
    // alt
    this->alt_d = 0;
    // backspace
    this->backspace_d = 0;
    // big_bracket
    this->big_bracket_d = 0;
    // blank
    this->blank_d = 0;
    // capslock_off
    this->capslock_off_d = 0;
    // capslock_on
    this->capslock_on_d = 0;
    // ctrl
    this->ctrl_d = 0;
    // delete
    this->delete_d = 0;
    // enter
    this->enter_d = 0;
    // exit
    this->exit_d = 0;
    // quotation_mark
    this->quotation_mark_d = 0;
    // semicolon
    this->semicolon_d = 0;
    // shift
    this->shift_d = 0;
    // splash
    this->splash_d = 0;
    // tab
    this->tab_d = 0;
    // windows
    this->windows_d = 0;
    // sharp bracket
    this->sharp_bracket_d = 0;
    this->tilde_d = 0;
    this->hyphen_d = 0;
    this->add_d = 0;
    this->up_d = 0;
    this->down_d = 0;
    this->left_d = 0;
    this->right_d = 0;
    this->home_d = 0;
    this->end_d = 0;
  }
  void times_all_zero()
  {
    this->a_d_times = 0;
    this->b_d_times = 0;
    this->c_d_times = 0;
    this->d_d_times = 0;
    this->e_d_times = 0;
    this->f_d_times = 0;
    this->g_d_times = 0;
    this->h_d_times = 0;
    this->i_d_times = 0;
    this->j_d_times = 0;
    this->k_d_times = 0;
    this->l_d_times = 0;
    this->m_d_times = 0;
    this->n_d_times = 0;
    this->o_d_times = 0;
    this->p_d_times = 0;
    this->q_d_times = 0;
    this->r_d_times = 0;
    this->s_d_times = 0;
    this->t_d_times = 0;
    this->u_d_times = 0;
    this->v_d_times = 0;
    this->w_d_times = 0;
    this->x_d_times = 0;
    this->y_d_times = 0;
    this->z_d_times = 0;
    this->nk_1_d_times = 0;
    this->nk_2_d_times = 0;
    this->nk_3_d_times = 0;
    this->nk_4_d_times = 0;
    this->nk_5_d_times = 0;
    this->nk_6_d_times = 0;
    this->nk_7_d_times = 0;
    this->nk_8_d_times = 0;
    this->nk_9_d_times = 0;
    this->nk_0_d_times = 0;
    // alt
    this->alt_d_times = 0;
    // backspace
    this->backspace_d_times = 0;
    // big_bracket
    this->big_bracket_d_times = 0;
    // blank
    this->blank_d_times = 0;
    // capslock_off
    this->capslock_off_d_times = 0;
    // capslock_on
    this->capslock_on_d_times = 0;
    // ctrl
    this->ctrl_d_times = 0;
    // delete
    this->delete_d_times = 0;
    // enter
    this->enter_d_times = 0;
    // exit
    this->exit_d_times = 0;
    // quotation_mark
    this->quotation_mark_d_times = 0;
    // semicolon
    this->semicolon_d_times = 0;
    // shift
    this->shift_d_times = 0;
    // splash
    this->splash_d_times = 0;
    // tab
    this->tab_d_times = 0;
    // windows
    this->windows_d_times = 0;
    // sharp bracket
    this->sharp_bracket_d_times = 0;
    this->tilde_d_times = 0;
    this->hyphen_d_times = 0;
    this->add_d_times = 0;
    this->up_d_times = 0;
    this->down_d_times = 0;
    this->left_d_times = 0;
    this->right_d_times = 0;
    this->home_d_times = 0;
    this->end_d_times = 0;
  }
  void increase_all()
  {
    this->a_d++;
    this->b_d++;
    this->c_d++;
    this->d_d++;
    this->e_d++;
    this->f_d++;
    this->g_d++;
    this->h_d++;
    this->i_d++;
    this->j_d++;
    this->k_d++;
    this->l_d++;
    this->m_d++;
    this->n_d++;
    this->o_d++;
    this->p_d++;
    this->q_d++;
    this->r_d++;
    this->s_d++;
    this->t_d++;
    this->u_d++;
    this->v_d++;
    this->w_d++;
    this->x_d++;
    this->y_d++;
    this->z_d++;
    this->nk_1_d++;
    this->nk_2_d++;
    this->nk_3_d++;
    this->nk_4_d++;
    this->nk_5_d++;
    this->nk_6_d++;
    this->nk_7_d++;
    this->nk_8_d++;
    this->nk_9_d++;
    this->nk_0_d++;
    // alt
    this->alt_d++;
    // backspace
    this->backspace_d++;
    // big_bracket
    this->big_bracket_d++;
    // blank
    this->blank_d++;
    // capslock_off
    this->capslock_off_d++;
    // capslock_on
    this->capslock_on_d++;
    // ctrl
    this->ctrl_d++;
    // delete
    this->delete_d++;
    // enter
    this->enter_d++;
    // exit
    this->exit_d++;
    // quotation_mark
    this->quotation_mark_d++;
    // semicolon
    this->semicolon_d++;
    // shift
    this->shift_d++;
    // splash
    this->splash_d++;
    // tab
    this->tab_d++;
    // windows
    this->windows_d++;
    // sharp bracket
    this->sharp_bracket_d++;
    this->tilde_d++;
    this->hyphen_d++;
    this->add_d++;
    this->up_d++;
    this->down_d++;
    this->left_d++;
    this->right_d++;
    this->end_d++;
    this->home_d++;
  }
  bool is_one_lower()
  {
    if (
        this->a_d < 2 && this->a_d >= 0 ||
        this->b_d < 2 && this->b_d >= 0 ||
        this->c_d < 2 && this->c_d >= 0 ||
        this->d_d < 2 && this->d_d >= 0 ||
        this->e_d < 2 && this->e_d >= 0 ||
        this->f_d < 2 && this->f_d >= 0 ||
        this->g_d < 2 && this->g_d >= 0 ||
        this->h_d < 2 && this->h_d >= 0 ||
        this->i_d < 2 && this->i_d >= 0 ||
        this->j_d < 2 && this->j_d >= 0 ||
        this->k_d < 2 && this->k_d >= 0 ||
        this->l_d < 2 && this->l_d >= 0 ||
        this->m_d < 2 && this->m_d >= 0 ||
        this->n_d < 2 && this->n_d >= 0 ||
        this->o_d < 2 && this->o_d >= 0 ||
        this->p_d < 2 && this->p_d >= 0 ||
        this->q_d < 2 && this->q_d >= 0 ||
        this->r_d < 2 && this->r_d >= 0 ||
        this->s_d < 2 && this->s_d >= 0 ||
        this->t_d < 2 && this->t_d >= 0 ||
        this->u_d < 2 && this->u_d >= 0 ||
        this->v_d < 2 && this->v_d >= 0 ||
        this->w_d < 2 && this->w_d >= 0 ||
        this->x_d < 2 && this->x_d >= 0 ||
        this->y_d < 2 && this->y_d >= 0 ||
        this->z_d < 2 && this->z_d >= 0 ||
        this->nk_1_d < 2 && this->nk_1_d >= 0 ||
        this->nk_2_d < 2 && this->nk_2_d >= 0 ||
        this->nk_3_d < 2 && this->nk_3_d >= 0 ||
        this->nk_4_d < 2 && this->nk_4_d >= 0 ||
        this->nk_5_d < 2 && this->nk_5_d >= 0 ||
        this->nk_6_d < 2 && this->nk_6_d >= 0 ||
        this->nk_7_d < 2 && this->nk_7_d >= 0 ||
        this->nk_8_d < 2 && this->nk_8_d >= 0 ||
        this->nk_9_d < 2 && this->nk_9_d >= 0 ||
        this->nk_0_d < 2 && this->nk_0_d >= 0 ||
        this->alt_d < 2 && this->alt_d >= 0 ||
        this->backspace_d < 2 && this->backspace_d >= 0 ||
        this->big_bracket_d < 2 && this->big_bracket_d >= 0 ||
        this->blank_d < 2 && this->blank_d >= 0 ||
        this->capslock_off_d < 2 && this->capslock_off_d >= 0 ||
        this->capslock_on_d < 2 && this->capslock_on_d >= 0 ||
        this->ctrl_d < 2 && this->ctrl_d >= 0 ||
        this->delete_d < 2 && this->delete_d >= 0 ||
        this->enter_d < 2 && this->enter_d >= 0 ||
        this->exit_d < 2 && this->exit_d >= 0 ||
        this->quotation_mark_d < 2 && this->quotation_mark_d >= 0 ||
        this->semicolon_d < 2 && this->semicolon_d >= 0 ||
        this->shift_d < 2 && this->shift_d >= 0 ||
        this->splash_d < 2 && this->splash_d >= 0 ||
        this->tab_d < 2 && this->tab_d >= 0 ||
        this->sharp_bracket_d < 2 && this->sharp_bracket_d >= 0 ||
        this->tilde_d < 2 && this->tilde_d >= 0 ||
        this->hyphen_d < 2 && this->hyphen_d >= 0 ||
        this->add_d < 2 && this->add_d >= 0 ||
        this->up_d < 2 && this->up_d >= 0 ||
        this->down_d < 2 && this->down_d >= 0 ||
        this->right_d < 2 && this->right_d >= 0 ||
        this->left_d < 2 && this->left_d >= 0 ||
        this->home_d < 2 && this->home_d >= 0 ||
        this->end_d < 2 && this->end_d >= 0 ||
        this->windows_d < 2 && this->windows_d >= 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

// bools
bool is_exit_program = false;
bool is_playing_continue_sound = false;
bool is_playing_exit_sound = false;

void play_continue_sound(sf::Sound &continue_sound)
{
  if (is_playing_continue_sound == false)
  {
    continue_sound.play();
    is_playing_continue_sound = true;
  }
}
void stop_continue_sound(sf::Sound &continue_sound)
{
  continue_sound.stop();
  is_playing_continue_sound = false;
}
void play_exit_sound(sf::Sound &exit_sound)
{
  if (is_playing_exit_sound == false)
  {
    exit_sound.play();
    is_playing_exit_sound = true;
  }
}
void stop_exit_sound(sf::Sound &exit_sound)
{
  exit_sound.stop();
  is_playing_exit_sound = false;
}

int main()
{
  bool load_media_status = true;
  // alt
  sf::SoundBuffer alt_sound_buffer;
  if (alt_sound_buffer.loadFromFile("./msounds/alt.flac") == false)
  {
    cout << "load audio file [alt] error!" << endl;
    load_media_status = false;
  }
  // backspace
  sf::SoundBuffer backspace_sound_buffer;
  if (backspace_sound_buffer.loadFromFile("./msounds/backspace.flac") == false)
  {
    cout << "load audio file [backspace] error!" << endl;
    load_media_status = false;
  }
  // big_bracket
  sf::SoundBuffer big_bracket_sound_buffer;
  if (big_bracket_sound_buffer.loadFromFile("./msounds/big_bracket.flac") == false)
  {
    cout << "load audio file [big_bracket] error!" << endl;
    load_media_status = false;
  }
  // blank
  sf::SoundBuffer blank_sound_buffer;
  if (blank_sound_buffer.loadFromFile("./msounds/blank.flac") == false)
  {
    cout << "load audio file [blank] error!" << endl;
    load_media_status = false;
  }
  // capslock_off
  sf::SoundBuffer capslock_off_sound_buffer;
  if (capslock_off_sound_buffer.loadFromFile("./msounds/capslock_off.flac") == false)
  {
    cout << "load audio file [capslock_off] error!" << endl;
    load_media_status = false;
  }
  // capslock_on
  sf::SoundBuffer capslock_on_sound_buffer;
  if (capslock_on_sound_buffer.loadFromFile("./msounds/capslock_on.flac") == false)
  {
    cout << "load audio file [capslock_on] error!" << endl;
    load_media_status = false;
  }
  // continue
  sf::SoundBuffer continue_sound_buffer;
  if (continue_sound_buffer.loadFromFile("./msounds/continue.flac") == false)
  {
    cout << "load audio file [continue] error!" << endl;
    load_media_status = false;
  }
  // ctrl
  sf::SoundBuffer ctrl_sound_buffer;
  if (ctrl_sound_buffer.loadFromFile("./msounds/ctrl.flac") == false)
  {
    cout << "load audio file [ctrl] error!" << endl;
    load_media_status = false;
  }
  // delete
  sf::SoundBuffer delete_sound_buffer;
  if (delete_sound_buffer.loadFromFile("./msounds/delete.flac") == false)
  {
    cout << "load audio file [delete] error!" << endl;
    load_media_status = false;
  }
  // enter
  sf::SoundBuffer enter_sound_buffer;
  if (enter_sound_buffer.loadFromFile("./msounds/enter.flac") == false)
  {
    cout << "load audio file [enter] error!" << endl;
    load_media_status = false;
  }
  // exit
  sf::SoundBuffer exit_sound_buffer;
  if (exit_sound_buffer.loadFromFile("./msounds/exit.flac") == false)
  {
    cout << "load audio file [exit] error!" << endl;
    load_media_status = false;
  }
  // normal_type
  sf::SoundBuffer normal_type_sound_buffer;
  if (normal_type_sound_buffer.loadFromFile("./msounds/normal_type.flac") == false)
  {
    cout << "load audio file [normal_type] error!" << endl;
    load_media_status = false;
  }
  // quotation_mark
  sf::SoundBuffer quotation_mark_sound_buffer;
  if (quotation_mark_sound_buffer.loadFromFile("./msounds/quotation_mark.flac") == false)
  {
    cout << "load audio file [quotation_mark] error!" << endl;
    load_media_status = false;
  }
  // semicolon
  sf::SoundBuffer semicolon_sound_buffer;
  if (semicolon_sound_buffer.loadFromFile("./msounds/semicolon.flac") == false)
  {
    cout << "load audio file [semicolon] error!" << endl;
    load_media_status = false;
  }
  // shift
  sf::SoundBuffer shift_sound_buffer;
  if (shift_sound_buffer.loadFromFile("./msounds/shift.flac") == false)
  {
    cout << "load audio file [shift] error!" << endl;
    load_media_status = false;
  }
  // splash
  sf::SoundBuffer splash_sound_buffer;
  if (splash_sound_buffer.loadFromFile("./msounds/splash.flac") == false)
  {
    cout << "load audio file [splash] error!" << endl;
    load_media_status = false;
  }
  // tab
  sf::SoundBuffer tab_sound_buffer;
  if (tab_sound_buffer.loadFromFile("./msounds/tab.flac") == false)
  {
    cout << "load audio file [tab] error!" << endl;
    load_media_status = false;
  }
  // windows
  sf::SoundBuffer windows_sound_buffer;
  if (windows_sound_buffer.loadFromFile("./msounds/windows.flac") == false)
  {
    cout << "load audio file [windows] error!" << endl;
    load_media_status = false;
  }
  // down
  sf::SoundBuffer down_sound_buffer;
  if (down_sound_buffer.loadFromFile("./msounds/down.flac") == false)
  {
    cout << "load audio file [down] error!" << endl;
    load_media_status = false;
  }
  // left
  sf::SoundBuffer left_sound_buffer;
  if (left_sound_buffer.loadFromFile("./msounds/left.flac") == false)
  {
    cout << "load audio file [left] error!" << endl;
    load_media_status = false;
  }
  // right
  sf::SoundBuffer right_sound_buffer;
  if (right_sound_buffer.loadFromFile("./msounds/right.flac") == false)
  {
    cout << "load audio file [right] error!" << endl;
    load_media_status = false;
  }
  // up
  sf::SoundBuffer up_sound_buffer;
  if (up_sound_buffer.loadFromFile("./msounds/up.flac") == false)
  {
    cout << "load audio file [up] error!" << endl;
    load_media_status = false;
  }
  if (load_media_status == false)
  {
    return -1;
  }

  // a-z
  sf::Sound a_sound;
  sf::Sound b_sound;
  sf::Sound c_sound;
  sf::Sound d_sound;
  sf::Sound e_sound;
  sf::Sound f_sound;
  sf::Sound g_sound;
  sf::Sound h_sound;
  sf::Sound i_sound;
  sf::Sound j_sound;
  sf::Sound k_sound;
  sf::Sound l_sound;
  sf::Sound m_sound;
  sf::Sound n_sound;
  sf::Sound o_sound;
  sf::Sound p_sound;
  sf::Sound q_sound;
  sf::Sound r_sound;
  sf::Sound s_sound;
  sf::Sound t_sound;
  sf::Sound u_sound;
  sf::Sound v_sound;
  sf::Sound w_sound;
  sf::Sound x_sound;
  sf::Sound y_sound;
  sf::Sound z_sound;
  // 0-9
  sf::Sound nk_1_sound;
  sf::Sound nk_2_sound;
  sf::Sound nk_3_sound;
  sf::Sound nk_4_sound;
  sf::Sound nk_5_sound;
  sf::Sound nk_6_sound;
  sf::Sound nk_7_sound;
  sf::Sound nk_8_sound;
  sf::Sound nk_9_sound;
  sf::Sound nk_0_sound;
  // a-z
  a_sound.setBuffer(normal_type_sound_buffer);
  b_sound.setBuffer(normal_type_sound_buffer);
  c_sound.setBuffer(normal_type_sound_buffer);
  d_sound.setBuffer(normal_type_sound_buffer);
  e_sound.setBuffer(normal_type_sound_buffer);
  f_sound.setBuffer(normal_type_sound_buffer);
  g_sound.setBuffer(normal_type_sound_buffer);
  h_sound.setBuffer(normal_type_sound_buffer);
  i_sound.setBuffer(normal_type_sound_buffer);
  j_sound.setBuffer(normal_type_sound_buffer);
  k_sound.setBuffer(normal_type_sound_buffer);
  l_sound.setBuffer(normal_type_sound_buffer);
  m_sound.setBuffer(normal_type_sound_buffer);
  n_sound.setBuffer(normal_type_sound_buffer);
  o_sound.setBuffer(normal_type_sound_buffer);
  p_sound.setBuffer(normal_type_sound_buffer);
  q_sound.setBuffer(normal_type_sound_buffer);
  r_sound.setBuffer(normal_type_sound_buffer);
  s_sound.setBuffer(normal_type_sound_buffer);
  t_sound.setBuffer(normal_type_sound_buffer);
  u_sound.setBuffer(normal_type_sound_buffer);
  v_sound.setBuffer(normal_type_sound_buffer);
  w_sound.setBuffer(normal_type_sound_buffer);
  x_sound.setBuffer(normal_type_sound_buffer);
  y_sound.setBuffer(normal_type_sound_buffer);
  z_sound.setBuffer(normal_type_sound_buffer);
  // 0-9
  nk_1_sound.setBuffer(normal_type_sound_buffer);
  nk_2_sound.setBuffer(normal_type_sound_buffer);
  nk_3_sound.setBuffer(normal_type_sound_buffer);
  nk_4_sound.setBuffer(normal_type_sound_buffer);
  nk_5_sound.setBuffer(normal_type_sound_buffer);
  nk_6_sound.setBuffer(normal_type_sound_buffer);
  nk_7_sound.setBuffer(normal_type_sound_buffer);
  nk_8_sound.setBuffer(normal_type_sound_buffer);
  nk_9_sound.setBuffer(normal_type_sound_buffer);
  nk_0_sound.setBuffer(normal_type_sound_buffer);

  // alt
  sf::Sound alt_sound;
  alt_sound.setBuffer(alt_sound_buffer);
  // backspace
  sf::Sound backspace_sound;
  backspace_sound.setBuffer(backspace_sound_buffer);
  // big_bracket
  sf::Sound big_bracket_sound;
  big_bracket_sound.setBuffer(big_bracket_sound_buffer);
  // blank
  sf::Sound blank_sound;
  blank_sound.setBuffer(blank_sound_buffer);
  // capslock_off
  sf::Sound capslock_off_sound;
  capslock_off_sound.setBuffer(capslock_off_sound_buffer);
  // capslock_on
  sf::Sound capslock_on_sound;
  capslock_on_sound.setBuffer(capslock_on_sound_buffer);
  // ctrl
  sf::Sound ctrl_sound;
  ctrl_sound.setBuffer(ctrl_sound_buffer);
  // delete
  sf::Sound delete_sound;
  delete_sound.setBuffer(delete_sound_buffer);
  // enter
  sf::Sound enter_sound;
  enter_sound.setBuffer(enter_sound_buffer);
  // exit
  sf::Sound exit_sound;
  exit_sound.setBuffer(exit_sound_buffer);
  // quotation_mark
  sf::Sound quotation_mark_sound;
  quotation_mark_sound.setBuffer(quotation_mark_sound_buffer);
  // semicolon
  sf::Sound semicolon_sound;
  semicolon_sound.setBuffer(semicolon_sound_buffer);
  // shift
  sf::Sound shift_sound;
  shift_sound.setBuffer(shift_sound_buffer);
  // splash
  sf::Sound splash_sound;
  splash_sound.setBuffer(splash_sound_buffer);
  // tab
  sf::Sound tab_sound;
  tab_sound.setBuffer(tab_sound_buffer);
  // windows
  sf::Sound windows_sound;
  windows_sound.setBuffer(windows_sound_buffer);
  // sharp_bracket
  sf::Sound sharp_bracket_sound;
  sharp_bracket_sound.setBuffer(big_bracket_sound_buffer);
  // tilde
  sf::Sound tilde_sound;
  tilde_sound.setBuffer(normal_type_sound_buffer);
  // hyphen
  sf::Sound hyphen_sound;
  hyphen_sound.setBuffer(normal_type_sound_buffer);
  // add
  sf::Sound add_sound;
  add_sound.setBuffer(normal_type_sound_buffer);
  // up
  sf::Sound up_sound;
  up_sound.setBuffer(up_sound_buffer);
  // down
  sf::Sound down_sound;
  down_sound.setBuffer(down_sound_buffer);
  // left
  sf::Sound left_sound;
  left_sound.setBuffer(left_sound_buffer);
  // right
  sf::Sound right_sound;
  right_sound.setBuffer(right_sound_buffer);
  // home
  sf::Sound home_sound;
  home_sound.setBuffer(big_bracket_sound_buffer);
  // end
  sf::Sound end_sound;
  end_sound.setBuffer(big_bracket_sound_buffer);
  // continue
  sf::Sound continue_sound;
  continue_sound.setBuffer(continue_sound_buffer);
  continue_sound.setLoop(true);

  // window creation
  sf::RenderWindow window(sf::VideoMode(640, 480), "tp 1.0");
  window.setFramerateLimit(60);
  window.setVisible(false);

  XCtr x_counter_obj = XCtr();
  x_counter_obj.zero_all();
  while (window.isOpen())
  {
    x_counter_obj.increase_all();
    if (!x_counter_obj.is_one_lower())
    {
      continue_sound.stop();
      is_playing_continue_sound = false;
      x_counter_obj.times_all_zero();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
      if (x_counter_obj.a_d <= 2 && x_counter_obj.a_d >= 0)
      {
        x_counter_obj.a_d_times++;
        if (x_counter_obj.a_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        a_sound.play();
      }
      x_counter_obj.a_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
    {
      if (x_counter_obj.b_d <= 2 && x_counter_obj.b_d >= 0)
      {
        x_counter_obj.b_d_times++;
        if (x_counter_obj.b_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        b_sound.play();
      }
      x_counter_obj.b_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
    {
      if (x_counter_obj.c_d <= 2 && x_counter_obj.c_d >= 0)
      {
        x_counter_obj.c_d_times++;
        if (x_counter_obj.c_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        c_sound.play();
      }
      x_counter_obj.c_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
      if (x_counter_obj.d_d <= 2 && x_counter_obj.d_d >= 0)
      {
        x_counter_obj.d_d_times++;
        if (x_counter_obj.d_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        d_sound.play();
      }
      x_counter_obj.d_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
      if (x_counter_obj.e_d <= 2 && x_counter_obj.e_d >= 0)
      {
        x_counter_obj.e_d_times++;
        if (x_counter_obj.e_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        e_sound.play();
      }
      x_counter_obj.e_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
    {
      if (x_counter_obj.f_d <= 2 && x_counter_obj.f_d >= 0)
      {
        x_counter_obj.f_d_times++;
        if (x_counter_obj.f_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        f_sound.play();
      }
      x_counter_obj.f_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
    {
      if (x_counter_obj.g_d <= 2 && x_counter_obj.g_d >= 0)
      {
        x_counter_obj.g_d_times++;
        if (x_counter_obj.g_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        g_sound.play();
      }
      x_counter_obj.g_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
    {
      if (x_counter_obj.h_d <= 2 && x_counter_obj.h_d >= 0)
      {
        x_counter_obj.h_d_times++;
        if (x_counter_obj.h_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        h_sound.play();
      }
      x_counter_obj.h_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
    {
      if (x_counter_obj.i_d <= 2 && x_counter_obj.i_d >= 0)
      {
        x_counter_obj.i_d_times++;
        if (x_counter_obj.i_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        i_sound.play();
      }
      x_counter_obj.i_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
    {
      if (x_counter_obj.j_d <= 2 && x_counter_obj.j_d >= 0)
      {
        x_counter_obj.j_d_times++;
        if (x_counter_obj.j_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        j_sound.play();
      }
      x_counter_obj.j_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
    {
      if (x_counter_obj.k_d <= 2 && x_counter_obj.k_d >= 0)
      {
        x_counter_obj.k_d_times++;
        if (x_counter_obj.k_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        k_sound.play();
      }
      x_counter_obj.k_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
    {
      if (x_counter_obj.l_d <= 2 && x_counter_obj.l_d >= 0)
      {
        x_counter_obj.l_d_times++;
        if (x_counter_obj.l_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        l_sound.play();
      }
      x_counter_obj.l_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
    {
      if (x_counter_obj.m_d <= 2 && x_counter_obj.m_d >= 0)
      {
        x_counter_obj.m_d_times++;
        if (x_counter_obj.m_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        m_sound.play();
      }
      x_counter_obj.m_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
    {
      if (x_counter_obj.n_d <= 2 && x_counter_obj.n_d >= 0)
      {
        x_counter_obj.n_d_times++;
        if (x_counter_obj.n_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        n_sound.play();
      }
      x_counter_obj.n_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
    {
      if (x_counter_obj.o_d <= 2 && x_counter_obj.o_d >= 0)
      {
        x_counter_obj.o_d_times++;
        if (x_counter_obj.o_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        o_sound.play();
      }
      x_counter_obj.o_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
    {
      if (x_counter_obj.p_d <= 2 && x_counter_obj.p_d >= 0)
      {
        x_counter_obj.p_d_times++;
        if (x_counter_obj.p_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        p_sound.play();
      }
      x_counter_obj.p_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
      if (x_counter_obj.q_d <= 2 && x_counter_obj.q_d >= 0)
      {
        x_counter_obj.q_d_times++;
        if (x_counter_obj.q_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        q_sound.play();
      }
      x_counter_obj.q_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
    {
      if (x_counter_obj.r_d <= 2 && x_counter_obj.r_d >= 0)
      {
        x_counter_obj.r_d_times++;
        if (x_counter_obj.r_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        r_sound.play();
      }
      x_counter_obj.r_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
      if (x_counter_obj.s_d <= 2 && x_counter_obj.s_d >= 0)
      {
        x_counter_obj.s_d_times++;
        if (x_counter_obj.s_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        s_sound.play();
      }
      x_counter_obj.s_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
    {
      if (x_counter_obj.t_d <= 2 && x_counter_obj.t_d >= 0)
      {
        x_counter_obj.t_d_times++;
        if (x_counter_obj.t_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        t_sound.play();
      }
      x_counter_obj.t_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
    {
      if (x_counter_obj.u_d <= 2 && x_counter_obj.u_d >= 0)
      {
        x_counter_obj.u_d_times++;
        if (x_counter_obj.u_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        u_sound.play();
      }
      x_counter_obj.u_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
    {
      if (x_counter_obj.v_d <= 2 && x_counter_obj.v_d >= 0)
      {
        x_counter_obj.v_d_times++;
        if (x_counter_obj.v_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        v_sound.play();
      }
      x_counter_obj.v_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
      if (x_counter_obj.w_d <= 2 && x_counter_obj.w_d >= 0)
      {
        x_counter_obj.w_d_times++;
        if (x_counter_obj.w_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        w_sound.play();
      }
      x_counter_obj.w_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
    {
      if (x_counter_obj.x_d <= 2 && x_counter_obj.x_d >= 0)
      {
        x_counter_obj.x_d_times++;
        if (x_counter_obj.x_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        x_sound.play();
      }
      x_counter_obj.x_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
    {
      if (x_counter_obj.y_d <= 2 && x_counter_obj.y_d >= 0)
      {
        x_counter_obj.y_d_times++;
        if (x_counter_obj.y_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        y_sound.play();
      }
      x_counter_obj.y_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
      if (x_counter_obj.z_d <= 2 && x_counter_obj.z_d >= 0)
      {
        x_counter_obj.z_d_times++;
        if (x_counter_obj.z_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        z_sound.play();
      }
      x_counter_obj.z_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tilde))
    {
      if (x_counter_obj.tilde_d <= 2 && x_counter_obj.tilde_d >= 0)
      {
        x_counter_obj.tilde_d_times++;
        if (x_counter_obj.tilde_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        tilde_sound.play();
      }
      x_counter_obj.tilde_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Hyphen))
    {
      if (x_counter_obj.hyphen_d <= 2 && x_counter_obj.hyphen_d >= 0)
      {
        x_counter_obj.hyphen_d_times++;
        if (x_counter_obj.hyphen_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        hyphen_sound.play();
      }
      x_counter_obj.hyphen_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Equal))
    {
      if (x_counter_obj.add_d <= 2 && x_counter_obj.add_d >= 0)
      {
        x_counter_obj.add_d_times++;
        if (x_counter_obj.add_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        add_sound.play();
      }
      x_counter_obj.add_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
    {
      if (x_counter_obj.nk_0_d <= 2 && x_counter_obj.nk_0_d >= 0)
      {
        x_counter_obj.nk_0_d_times++;
        if (x_counter_obj.nk_0_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_0_sound.play();
      }
      x_counter_obj.nk_0_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
    {
      if (x_counter_obj.nk_1_d <= 2 && x_counter_obj.nk_1_d >= 0)
      {
        x_counter_obj.nk_1_d_times++;
        if (x_counter_obj.nk_1_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_1_sound.play();
      }
      x_counter_obj.nk_1_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
    {
      if (x_counter_obj.nk_2_d <= 2 && x_counter_obj.nk_2_d >= 0)
      {
        x_counter_obj.nk_2_d_times++;
        if (x_counter_obj.nk_2_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_2_sound.play();
      }
      x_counter_obj.nk_2_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
    {
      if (x_counter_obj.nk_3_d <= 2 && x_counter_obj.nk_3_d >= 0)
      {
        x_counter_obj.nk_3_d_times++;
        if (x_counter_obj.nk_3_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_3_sound.play();
      }
      x_counter_obj.nk_3_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
    {
      if (x_counter_obj.nk_4_d <= 2 && x_counter_obj.nk_4_d >= 0)
      {
        x_counter_obj.nk_4_d_times++;
        if (x_counter_obj.nk_4_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_4_sound.play();
      }
      x_counter_obj.nk_4_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
    {
      if (x_counter_obj.nk_5_d <= 2 && x_counter_obj.nk_5_d >= 0)
      {
        x_counter_obj.nk_5_d_times++;
        if (x_counter_obj.nk_5_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_5_sound.play();
      }
      x_counter_obj.nk_5_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
    {
      if (x_counter_obj.nk_6_d <= 2 && x_counter_obj.nk_6_d >= 0)
      {
        x_counter_obj.nk_6_d_times++;
        if (x_counter_obj.nk_6_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_6_sound.play();
      }
      x_counter_obj.nk_6_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
    {
      if (x_counter_obj.nk_7_d <= 2 && x_counter_obj.nk_7_d >= 0)
      {
        x_counter_obj.nk_7_d_times++;
        if (x_counter_obj.nk_7_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_7_sound.play();
      }
      x_counter_obj.nk_7_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
    {
      if (x_counter_obj.nk_8_d <= 2 && x_counter_obj.nk_8_d >= 0)
      {
        x_counter_obj.nk_8_d_times++;
        if (x_counter_obj.nk_8_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_8_sound.play();
      }
      x_counter_obj.nk_8_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
    {
      if (x_counter_obj.nk_9_d <= 2 && x_counter_obj.nk_9_d >= 0)
      {
        x_counter_obj.nk_9_d_times++;
        if (x_counter_obj.nk_9_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        nk_9_sound.play();
      }
      x_counter_obj.nk_9_d = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt) || sf::Keyboard::isKeyPressed(sf::Keyboard::RAlt))
    {
      if (x_counter_obj.alt_d <= 2 && x_counter_obj.alt_d >= 0)
      {
      }
      else
      {
        alt_sound.play();
      }
      x_counter_obj.alt_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
    {
      if (x_counter_obj.backspace_d <= 2 && x_counter_obj.backspace_d >= 0)
      {
        x_counter_obj.backspace_d_times++;
        if (x_counter_obj.backspace_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        backspace_sound.play();
      }
      x_counter_obj.backspace_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LBracket) || sf::Keyboard::isKeyPressed(sf::Keyboard::RBracket))
    {
      if (x_counter_obj.big_bracket_d <= 2 && x_counter_obj.big_bracket_d >= 0)
      {
        x_counter_obj.big_bracket_d_times++;
        if (x_counter_obj.big_bracket_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        big_bracket_sound.play();
      }
      x_counter_obj.big_bracket_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Comma) || sf::Keyboard::isKeyPressed(sf::Keyboard::Period))
    {
      if (x_counter_obj.sharp_bracket_d <= 2 && x_counter_obj.sharp_bracket_d >= 0)
      {
        x_counter_obj.sharp_bracket_d_times++;
        if (x_counter_obj.sharp_bracket_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        sharp_bracket_sound.play();
      }
      x_counter_obj.sharp_bracket_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
      if (x_counter_obj.blank_d <= 2 && x_counter_obj.blank_d >= 0)
      {
        x_counter_obj.blank_d_times++;
        if (x_counter_obj.blank_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        blank_sound.play();
      }
      x_counter_obj.blank_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) || sf::Keyboard::isKeyPressed(sf::Keyboard::RControl))
    {
      if (x_counter_obj.ctrl_d <= 2 && x_counter_obj.ctrl_d >= 0)
      {
      }
      else
      {
        ctrl_sound.play();
      }
      x_counter_obj.ctrl_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
    {
      if (x_counter_obj.delete_d <= 2 && x_counter_obj.delete_d >= 0)
      {
        x_counter_obj.delete_d_times++;
        if (x_counter_obj.delete_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        delete_sound.play();
      }
      x_counter_obj.delete_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
    {
      if (x_counter_obj.enter_d <= 2 && x_counter_obj.enter_d >= 0)
      {
        x_counter_obj.enter_d_times++;
        if (x_counter_obj.enter_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        enter_sound.play();
      }
      x_counter_obj.enter_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Quote))
    {
      if (x_counter_obj.quotation_mark_d <= 2 && x_counter_obj.quotation_mark_d >= 0)
      {
        x_counter_obj.quotation_mark_d_times++;
        if (x_counter_obj.quotation_mark_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        quotation_mark_sound.play();
      }
      x_counter_obj.quotation_mark_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Semicolon))
    {
      if (x_counter_obj.semicolon_d <= 2 && x_counter_obj.semicolon_d >= 0)
      {
        x_counter_obj.semicolon_d_times++;
        if (x_counter_obj.semicolon_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        semicolon_sound.play();
      }
      x_counter_obj.semicolon_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) || sf::Keyboard::isKeyPressed(sf::Keyboard::RShift))
    {
      if (x_counter_obj.shift_d <= 2 && x_counter_obj.shift_d >= 0)
      {
        x_counter_obj.shift_d_times++;
        if (x_counter_obj.shift_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        shift_sound.play();
      }
      x_counter_obj.shift_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Slash) || sf::Keyboard::isKeyPressed(sf::Keyboard::Backslash))
    {
      if (x_counter_obj.splash_d <= 2 && x_counter_obj.splash_d >= 0)
      {
        x_counter_obj.splash_d_times++;
        if (x_counter_obj.splash_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        splash_sound.play();
      }
      x_counter_obj.splash_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
    {
      if (x_counter_obj.tab_d <= 2 && x_counter_obj.tab_d >= 0)
      {
        x_counter_obj.tab_d_times++;
        if (x_counter_obj.tab_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        tab_sound.play();
      }
      x_counter_obj.tab_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem))
    {
      if (x_counter_obj.windows_d <= 2 && x_counter_obj.windows_d >= 0)
      {
      }
      else
      {
        windows_sound.play();
      }
      x_counter_obj.windows_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
      if (x_counter_obj.up_d <= 2 && x_counter_obj.up_d >= 0)
      {
        x_counter_obj.up_d_times++;
        if (x_counter_obj.up_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        up_sound.play();
      }
      x_counter_obj.up_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
      if (x_counter_obj.down_d <= 2 && x_counter_obj.down_d >= 0)
      {
        x_counter_obj.down_d_times++;
        if (x_counter_obj.down_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        down_sound.play();
      }
      x_counter_obj.down_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
      if (x_counter_obj.right_d <= 2 && x_counter_obj.right_d >= 0)
      {
        x_counter_obj.right_d_times++;
        if (x_counter_obj.right_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        right_sound.play();
      }
      x_counter_obj.right_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
      if (x_counter_obj.left_d <= 2 && x_counter_obj.left_d >= 0)
      {
        x_counter_obj.left_d_times++;
        if (x_counter_obj.left_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        left_sound.play();
      }
      x_counter_obj.left_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Home))
    {
      if (x_counter_obj.home_d <= 2 && x_counter_obj.home_d >= 0)
      {
        x_counter_obj.home_d_times++;
        if (x_counter_obj.home_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        home_sound.play();
      }
      x_counter_obj.home_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::End))
    {
      if (x_counter_obj.end_d <= 2 && x_counter_obj.end_d >= 0)
      {
        x_counter_obj.end_d_times++;
        if (x_counter_obj.end_d_times >= 30)
        {
          if (is_playing_continue_sound == false)
          {
            continue_sound.play();
            is_playing_continue_sound = true;
          }
        }
      }
      else
      {
        end_sound.play();
      }
      x_counter_obj.end_d = 0;
    }

    // exit
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
    {
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt))
      {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F9))
        {
          is_exit_program = true;
          play_exit_sound(exit_sound);
        }
      }
    }

    if (is_exit_program == true)
    {
      if (exit_sound.getStatus() == sf::SoundSource::Status::Stopped)
      {
        window.close();
      }
    }

    sf::Event event;
    while (window.pollEvent(event))
    {
      switch (event.type)
      {
      case sf::Event::Closed:
      {
        window.close();
        break;
      }
      default:
      {
        break;
      }
      }
    }
    window.clear();
    window.display();
  }
  return 0;
}