// <!-- 💥BILLLIAO-⚛-FILEHEADER☣ -->
// <!-- ⚡AUTHOR: BillLiaoMX -->
// <!-- 🌶CREATION-DATE: 2019-11-07 21:07:13💦 -->
// <!-- 💤LAST-MODIFY-AUTHOR:   BillLiaoMX💢 -->
// <!-- 💮UPDATE-TIME: 2019-11-07 21:07:13💠 -->
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <math.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

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
  int alt_d = 0;
  int alt_d_times = 0;
  int backspace_d = 0;
  int backspace_d_times = 0;
  int left_bracket_d = 0;
  int left_bracket_d_times = 0;
  int right_bracket_d = 0;
  int right_bracket_d_times = 0;
  int comma_d = 0;
  int comma_d_times = 0;
  int period_d = 0;
  int period_d_times = 0;
  int blank_d = 0;
  int blank_d_times = 0;
  int capslock_off_d = 0;
  int capslock_off_d_times = 0;
  int capslock_on_d = 0;
  int capslock_on_d_times = 0;
  int ctrl_d = 0;
  int ctrl_d_times = 0;
  int delete_d = 0;
  int delete_d_times = 0;
  int enter_d = 0;
  int enter_d_times = 0;
  int exit_d = 0;
  int exit_d_times = 0;
  int quotation_mark_d = 0;
  int quotation_mark_d_times = 0;
  int semicolon_d = 0;
  int semicolon_d_times = 0;
  int shift_d = 0;
  int shift_d_times = 0;
  int splash_d = 0;
  int splash_d_times = 0;
  int tab_d = 0;
  int tab_d_times = 0;
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
  int ctrl_c_d = 0;
  int ctrl_c_d_times = 0;
  int ctrl_v_d = 0;
  int ctrl_v_d_times = 0;
  int backspace_continue_d = 3;
  int ctrl_v_continue_d = 3;
  void continue_value_reinit()
  {
    this->backspace_continue_d = 3;
    this->ctrl_v_continue_d = 3;
  }
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
    this->alt_d = 0;
    this->backspace_d = 0;
    this->left_bracket_d = 0;
    this->right_bracket_d = 0;
    this->blank_d = 0;
    this->capslock_off_d = 0;
    this->capslock_on_d = 0;
    this->ctrl_d = 0;
    this->delete_d = 0;
    this->enter_d = 0;
    this->exit_d = 0;
    this->quotation_mark_d = 0;
    this->semicolon_d = 0;
    this->shift_d = 0;
    this->splash_d = 0;
    this->tab_d = 0;
    this->windows_d = 0;
    this->comma_d = 0;
    this->period_d = 0;
    this->tilde_d = 0;
    this->hyphen_d = 0;
    this->add_d = 0;
    this->up_d = 0;
    this->down_d = 0;
    this->left_d = 0;
    this->right_d = 0;
    this->home_d = 0;
    this->end_d = 0;
    this->ctrl_c_d = 0;
    this->ctrl_v_d = 0;
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
    this->alt_d_times = 0;
    this->backspace_d_times = 0;
    this->left_bracket_d_times = 0;
    this->right_bracket_d_times = 0;
    this->blank_d_times = 0;
    this->capslock_off_d_times = 0;
    this->capslock_on_d_times = 0;
    this->ctrl_d_times = 0;
    this->delete_d_times = 0;
    this->enter_d_times = 0;
    this->exit_d_times = 0;
    this->quotation_mark_d_times = 0;
    this->semicolon_d_times = 0;
    this->shift_d_times = 0;
    this->splash_d_times = 0;
    this->tab_d_times = 0;
    this->windows_d_times = 0;
    this->comma_d_times = 0;
    this->period_d_times = 0;
    this->tilde_d_times = 0;
    this->hyphen_d_times = 0;
    this->add_d_times = 0;
    this->up_d_times = 0;
    this->down_d_times = 0;
    this->left_d_times = 0;
    this->right_d_times = 0;
    this->home_d_times = 0;
    this->end_d_times = 0;
    this->ctrl_c_d_times = 0;
    this->ctrl_v_d_times = 0;
  }
  int X_MAX_COUNT = 3;
  void increase_all()
  {
    if (this->a_d != X_MAX_COUNT)
    {
      this->a_d++;
    }
    if (this->b_d != X_MAX_COUNT)
    {
      this->b_d++;
    }
    if (this->c_d != X_MAX_COUNT)
    {
      this->c_d++;
    }
    if (this->d_d != X_MAX_COUNT)
    {
      this->d_d++;
    }
    if (this->e_d != X_MAX_COUNT)
    {
      this->e_d++;
    }
    if (this->f_d != X_MAX_COUNT)
    {
      this->f_d++;
    }
    if (this->g_d != X_MAX_COUNT)
    {
      this->g_d++;
    }
    if (this->h_d != X_MAX_COUNT)
    {
      this->h_d++;
    }
    if (this->i_d != X_MAX_COUNT)
    {
      this->i_d++;
    }
    if (this->j_d != X_MAX_COUNT)
    {
      this->j_d++;
    }
    if (this->k_d != X_MAX_COUNT)
    {
      this->k_d++;
    }
    if (this->l_d != X_MAX_COUNT)
    {
      this->l_d++;
    }
    if (this->m_d != X_MAX_COUNT)
    {
      this->m_d++;
    }
    if (this->n_d != X_MAX_COUNT)
    {
      this->n_d++;
    }
    if (this->o_d != X_MAX_COUNT)
    {
      this->o_d++;
    }
    if (this->p_d != X_MAX_COUNT)
    {
      this->p_d++;
    }
    if (this->q_d != X_MAX_COUNT)
    {
      this->q_d++;
    }
    if (this->r_d != X_MAX_COUNT)
    {
      this->r_d++;
    }
    if (this->s_d != X_MAX_COUNT)
    {
      this->s_d++;
    }
    if (this->t_d != X_MAX_COUNT)
    {
      this->t_d++;
    }
    if (this->u_d != X_MAX_COUNT)
    {
      this->u_d++;
    }
    if (this->v_d != X_MAX_COUNT)
    {
      this->v_d++;
    }
    if (this->w_d != X_MAX_COUNT)
    {
      this->w_d++;
    }
    if (this->x_d != X_MAX_COUNT)
    {
      this->x_d++;
    }
    if (this->y_d != X_MAX_COUNT)
    {
      this->y_d++;
    }
    if (this->z_d != X_MAX_COUNT)
    {
      this->z_d++;
    }
    if (this->nk_1_d != X_MAX_COUNT)
    {
      this->nk_1_d++;
    }
    if (this->nk_2_d != X_MAX_COUNT)
    {
      this->nk_2_d++;
    }
    if (this->nk_3_d != X_MAX_COUNT)
    {
      this->nk_3_d++;
    }
    if (this->nk_4_d != X_MAX_COUNT)
    {
      this->nk_4_d++;
    }
    if (this->nk_5_d != X_MAX_COUNT)
    {
      this->nk_5_d++;
    }
    if (this->nk_6_d != X_MAX_COUNT)
    {
      this->nk_6_d++;
    }
    if (this->nk_7_d != X_MAX_COUNT)
    {
      this->nk_7_d++;
    }
    if (this->nk_8_d != X_MAX_COUNT)
    {
      this->nk_8_d++;
    }
    if (this->nk_9_d != X_MAX_COUNT)
    {
      this->nk_9_d++;
    }
    if (this->nk_0_d != X_MAX_COUNT)
    {
      this->nk_0_d++;
    }
    if (this->alt_d != X_MAX_COUNT)
    {
      this->alt_d++;
    }
    if (this->backspace_d != X_MAX_COUNT)
    {
      this->backspace_d++;
    }
    if (this->left_bracket_d != X_MAX_COUNT)
    {
      this->left_bracket_d++;
    }
    if (this->right_bracket_d != X_MAX_COUNT)
    {
      this->right_bracket_d++;
    }
    if (this->blank_d != X_MAX_COUNT)
    {
      this->blank_d++;
    }
    if (this->capslock_off_d != X_MAX_COUNT)
    {
      this->capslock_off_d++;
    }
    if (this->capslock_on_d != X_MAX_COUNT)
    {
      this->capslock_on_d++;
    }
    if (this->ctrl_d != X_MAX_COUNT)
    {
      this->ctrl_d++;
    }
    if (this->delete_d != X_MAX_COUNT)
    {
      this->delete_d++;
    }
    if (this->enter_d != X_MAX_COUNT)
    {
      this->enter_d++;
    }
    if (this->exit_d != X_MAX_COUNT)
    {
      this->exit_d++;
    }
    if (this->quotation_mark_d != X_MAX_COUNT)
    {
      this->quotation_mark_d++;
    }
    if (this->semicolon_d != X_MAX_COUNT)
    {
      this->semicolon_d++;
    }
    if (this->shift_d != X_MAX_COUNT)
    {
      this->shift_d++;
    }
    if (this->splash_d != X_MAX_COUNT)
    {
      this->splash_d++;
    }
    if (this->tab_d != X_MAX_COUNT)
    {
      this->tab_d++;
    }
    if (this->windows_d != X_MAX_COUNT)
    {
      this->windows_d++;
    }
    if (this->comma_d != X_MAX_COUNT)
    {
      this->comma_d++;
    }
    if (this->period_d != X_MAX_COUNT)
    {
      this->period_d++;
    }
    if (this->tilde_d != X_MAX_COUNT)
    {
      this->tilde_d++;
    }
    if (this->hyphen_d != X_MAX_COUNT)
    {
      this->hyphen_d++;
    }
    if (this->add_d != X_MAX_COUNT)
    {
      this->add_d++;
    }
    if (this->up_d != X_MAX_COUNT)
    {
      this->up_d++;
    }
    if (this->down_d != X_MAX_COUNT)
    {
      this->down_d++;
    }
    if (this->left_d != X_MAX_COUNT)
    {
      this->left_d++;
    }
    if (this->right_d != X_MAX_COUNT)
    {
      this->right_d++;
    }
    if (this->end_d != X_MAX_COUNT)
    {
      this->end_d++;
    }
    if (this->home_d != X_MAX_COUNT)
    {
      this->home_d++;
    }
    if (this->ctrl_c_d != X_MAX_COUNT)
    {
      this->ctrl_c_d++;
    }
    if (this->ctrl_v_d != X_MAX_COUNT)
    {
      this->ctrl_v_d++;
    }
  }
  bool is_one_lower()
  {
    if (
        this->a_d <= 1 && this->a_d >= 0 ||
        this->b_d <= 1 && this->b_d >= 0 ||
        this->c_d <= 1 && this->c_d >= 0 ||
        this->d_d <= 1 && this->d_d >= 0 ||
        this->e_d <= 1 && this->e_d >= 0 ||
        this->f_d <= 1 && this->f_d >= 0 ||
        this->g_d <= 1 && this->g_d >= 0 ||
        this->h_d <= 1 && this->h_d >= 0 ||
        this->i_d <= 1 && this->i_d >= 0 ||
        this->j_d <= 1 && this->j_d >= 0 ||
        this->k_d <= 1 && this->k_d >= 0 ||
        this->l_d <= 1 && this->l_d >= 0 ||
        this->m_d <= 1 && this->m_d >= 0 ||
        this->n_d <= 1 && this->n_d >= 0 ||
        this->o_d <= 1 && this->o_d >= 0 ||
        this->p_d <= 1 && this->p_d >= 0 ||
        this->q_d <= 1 && this->q_d >= 0 ||
        this->r_d <= 1 && this->r_d >= 0 ||
        this->s_d <= 1 && this->s_d >= 0 ||
        this->t_d <= 1 && this->t_d >= 0 ||
        this->u_d <= 1 && this->u_d >= 0 ||
        this->v_d <= 1 && this->v_d >= 0 ||
        this->w_d <= 1 && this->w_d >= 0 ||
        this->x_d <= 1 && this->x_d >= 0 ||
        this->y_d <= 1 && this->y_d >= 0 ||
        this->z_d <= 1 && this->z_d >= 0 ||
        this->nk_1_d <= 1 && this->nk_1_d >= 0 ||
        this->nk_2_d <= 1 && this->nk_2_d >= 0 ||
        this->nk_3_d <= 1 && this->nk_3_d >= 0 ||
        this->nk_4_d <= 1 && this->nk_4_d >= 0 ||
        this->nk_5_d <= 1 && this->nk_5_d >= 0 ||
        this->nk_6_d <= 1 && this->nk_6_d >= 0 ||
        this->nk_7_d <= 1 && this->nk_7_d >= 0 ||
        this->nk_8_d <= 1 && this->nk_8_d >= 0 ||
        this->nk_9_d <= 1 && this->nk_9_d >= 0 ||
        this->nk_0_d <= 1 && this->nk_0_d >= 0 ||
        this->alt_d < 2 && this->alt_d >= 0 ||
        this->backspace_d < 2 && this->backspace_d >= 0 ||
        this->left_bracket_d < 2 && this->left_bracket_d >= 0 ||
        this->right_bracket_d < 2 && this->right_bracket_d >= 0 ||
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
        this->comma_d < 2 && this->comma_d >= 0 ||
        this->period_d < 2 && this->period_d >= 0 ||
        this->tilde_d < 2 && this->tilde_d >= 0 ||
        this->hyphen_d < 2 && this->hyphen_d >= 0 ||
        this->add_d < 2 && this->add_d >= 0 ||
        this->up_d < 2 && this->up_d >= 0 ||
        this->down_d < 2 && this->down_d >= 0 ||
        this->right_d < 2 && this->right_d >= 0 ||
        this->left_d < 2 && this->left_d >= 0 ||
        this->home_d < 2 && this->home_d >= 0 ||
        this->end_d < 2 && this->end_d >= 0 ||
        this->ctrl_c_d < 2 && this->ctrl_c_d >= 0 ||
        this->ctrl_v_d < 2 && this->ctrl_v_d >= 0 ||
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
bool is_block_continue_sound = false;

sf::Sound *sound_pool_list = nullptr;
int X_MAX_SOUND_POOL_COUNTER = 20;
int current_pool_index = 0;
string pooling_buffer_name = "";

void init_sound_pool()
{
  sound_pool_list = new sf::Sound[X_MAX_SOUND_POOL_COUNTER];
}
void set_pool_buffer(sf::SoundBuffer &current_sound_buffer, string buffer_name)
{
  if (pooling_buffer_name == buffer_name){
    cout<<"no need to reset"<<endl;
    return;
  }
  for (size_t i = 0; i < 20; i++)
  {
    sound_pool_list[i].setBuffer(current_sound_buffer);
  }
  current_pool_index = 0;
  pooling_buffer_name = buffer_name;
}
void get_next_pool_index()
{
  if (current_pool_index == X_MAX_SOUND_POOL_COUNTER - 1)
  {
    current_pool_index = 0;
  }
  else
  {
    current_pool_index++;
  }
}
sf::Sound get_next_from_pool()
{
  get_next_pool_index();
  return sound_pool_list[current_pool_index];
}

void play_continue_sound(sf::Sound &continue_sound)
{
  if (is_block_continue_sound == true)
  {
    return;
  }
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
void exit_program(sf::Sound &exit_sound)
{
  is_exit_program = true;
  play_exit_sound(exit_sound);
}

int main()
{
  bool load_media_status = true;
  init_sound_pool();
  sf::SoundBuffer alt_sound_buffer;
  if (alt_sound_buffer.loadFromFile("./msounds/alt.flac") == false)
  {
    cout << "load audio file [alt] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer backspace_sound_buffer;
  if (backspace_sound_buffer.loadFromFile("./msounds/backspace.flac") == false)
  {
    cout << "load audio file [backspace] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer big_bracket_sound_buffer;
  if (big_bracket_sound_buffer.loadFromFile("./msounds/big_bracket.flac") == false)
  {
    cout << "load audio file [big_bracket] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer blank_sound_buffer;
  if (blank_sound_buffer.loadFromFile("./msounds/blank.flac") == false)
  {
    cout << "load audio file [blank] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer capslock_off_sound_buffer;
  if (capslock_off_sound_buffer.loadFromFile("./msounds/capslock_off.flac") == false)
  {
    cout << "load audio file [capslock_off] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer capslock_on_sound_buffer;
  if (capslock_on_sound_buffer.loadFromFile("./msounds/capslock_on.flac") == false)
  {
    cout << "load audio file [capslock_on] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer continue_sound_buffer;
  if (continue_sound_buffer.loadFromFile("./msounds/continue.flac") == false)
  {
    cout << "load audio file [continue] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer ctrl_sound_buffer;
  if (ctrl_sound_buffer.loadFromFile("./msounds/ctrl.flac") == false)
  {
    cout << "load audio file [ctrl] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer delete_sound_buffer;
  if (delete_sound_buffer.loadFromFile("./msounds/delete.flac") == false)
  {
    cout << "load audio file [delete] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer enter_sound_buffer;
  if (enter_sound_buffer.loadFromFile("./msounds/enter.flac") == false)
  {
    cout << "load audio file [enter] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer exit_sound_buffer;
  if (exit_sound_buffer.loadFromFile("./msounds/exit.flac") == false)
  {
    cout << "load audio file [exit] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer normal_type_sound_buffer;
  if (normal_type_sound_buffer.loadFromFile("./msounds/normal_type.flac") == false)
  {
    cout << "load audio file [normal_type] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer quotation_mark_sound_buffer;
  if (quotation_mark_sound_buffer.loadFromFile("./msounds/normal_type.flac") == false)
  {
    cout << "load audio file [quotation_mark] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer semicolon_sound_buffer;
  if (semicolon_sound_buffer.loadFromFile("./msounds/semicolon.flac") == false)
  {
    cout << "load audio file [semicolon] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer shift_sound_buffer;
  if (shift_sound_buffer.loadFromFile("./msounds/shift.flac") == false)
  {
    cout << "load audio file [shift] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer splash_sound_buffer;
  if (splash_sound_buffer.loadFromFile("./msounds/splash.flac") == false)
  {
    cout << "load audio file [splash] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer tab_sound_buffer;
  if (tab_sound_buffer.loadFromFile("./msounds/tab.flac") == false)
  {
    cout << "load audio file [tab] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer windows_sound_buffer;
  if (windows_sound_buffer.loadFromFile("./msounds/windows.flac") == false)
  {
    cout << "load audio file [windows] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer down_sound_buffer;
  if (down_sound_buffer.loadFromFile("./msounds/down.flac") == false)
  {
    cout << "load audio file [down] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer left_sound_buffer;
  if (left_sound_buffer.loadFromFile("./msounds/left.flac") == false)
  {
    cout << "load audio file [left] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer right_sound_buffer;
  if (right_sound_buffer.loadFromFile("./msounds/right.flac") == false)
  {
    cout << "load audio file [right] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer up_sound_buffer;
  if (up_sound_buffer.loadFromFile("./msounds/up.flac") == false)
  {
    cout << "load audio file [up] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer home_sound_buffer;
  if (home_sound_buffer.loadFromFile("./msounds/home.flac") == false)
  {
    cout << "load audio file [home] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer end_sound_buffer;
  if (end_sound_buffer.loadFromFile("./msounds/end.flac") == false)
  {
    cout << "load audio file [end] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer comma_sound_buffer;
  if (comma_sound_buffer.loadFromFile("./msounds/comma.flac") == false)
  {
    cout << "load audio file [comma] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer period_sound_buffer;
  if (period_sound_buffer.loadFromFile("./msounds/period.flac") == false)
  {
    cout << "load audio file [period] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer ctrl_c_sound_buffer;
  if (ctrl_c_sound_buffer.loadFromFile("./msounds/ctrl_c.flac") == false)
  {
    cout << "load audio file [ctrl_c] error!" << endl;
    load_media_status = false;
  }
  sf::SoundBuffer ctrl_v_sound_buffer;
  if (ctrl_v_sound_buffer.loadFromFile("./msounds/ctrl_v.flac") == false)
  {
    cout << "load audio file [ctrl_v] error!" << endl;
    load_media_status = false;
  }
  if (load_media_status == false)
  {
    return -1;
  }

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

  sf::Sound alt_sound;
  alt_sound.setBuffer(alt_sound_buffer);
  sf::Sound backspace_sound;
  backspace_sound.setBuffer(backspace_sound_buffer);
  sf::Sound left_bracket_sound;
  left_bracket_sound.setBuffer(big_bracket_sound_buffer);
  sf::Sound right_bracket_sound;
  right_bracket_sound.setBuffer(big_bracket_sound_buffer);
  sf::Sound blank_sound;
  blank_sound.setBuffer(blank_sound_buffer);
  sf::Sound capslock_off_sound;
  capslock_off_sound.setBuffer(capslock_off_sound_buffer);
  sf::Sound capslock_on_sound;
  capslock_on_sound.setBuffer(capslock_on_sound_buffer);
  sf::Sound ctrl_sound;
  ctrl_sound.setBuffer(ctrl_sound_buffer);
  sf::Sound delete_sound;
  delete_sound.setBuffer(delete_sound_buffer);
  sf::Sound enter_sound;
  enter_sound.setBuffer(enter_sound_buffer);
  sf::Sound exit_sound;
  exit_sound.setBuffer(exit_sound_buffer);
  sf::Sound quotation_mark_sound;
  quotation_mark_sound.setBuffer(quotation_mark_sound_buffer);
  sf::Sound semicolon_sound;
  semicolon_sound.setBuffer(semicolon_sound_buffer);
  sf::Sound shift_sound;
  shift_sound.setBuffer(shift_sound_buffer);
  sf::Sound splash_sound;
  splash_sound.setBuffer(splash_sound_buffer);
  sf::Sound tab_sound;
  tab_sound.setBuffer(tab_sound_buffer);
  sf::Sound windows_sound;
  windows_sound.setBuffer(windows_sound_buffer);
  sf::Sound comma_sound;
  comma_sound.setBuffer(blank_sound_buffer);
  sf::Sound period_sound;
  period_sound.setBuffer(blank_sound_buffer);
  sf::Sound tilde_sound;
  tilde_sound.setBuffer(normal_type_sound_buffer);
  sf::Sound hyphen_sound;
  hyphen_sound.setBuffer(normal_type_sound_buffer);
  sf::Sound add_sound;
  add_sound.setBuffer(normal_type_sound_buffer);
  sf::Sound up_sound;
  up_sound.setBuffer(up_sound_buffer);
  sf::Sound down_sound;
  down_sound.setBuffer(down_sound_buffer);
  sf::Sound left_sound;
  left_sound.setBuffer(left_sound_buffer);
  sf::Sound right_sound;
  right_sound.setBuffer(right_sound_buffer);
  sf::Sound home_sound;
  home_sound.setBuffer(home_sound_buffer);
  sf::Sound end_sound;
  end_sound.setBuffer(end_sound_buffer);
  sf::Sound ctrl_c_sound;
  ctrl_c_sound.setBuffer(ctrl_c_sound_buffer);
  sf::Sound ctrl_v_sound;
  ctrl_v_sound.setBuffer(ctrl_v_sound_buffer);
  sf::Sound continue_sound;
  continue_sound.setBuffer(continue_sound_buffer);
  continue_sound.setLoop(true);

  srand(static_cast<unsigned>(time(0)));

  sf::RenderWindow window(sf::VideoMode(640, 480), "tp 1.0");
  window.setFramerateLimit(60);
  window.setVisible(false);

  XCtr x_counter_obj = XCtr();
  x_counter_obj.zero_all();
  while (window.isOpen())
  {
    float low_bound = -.01f;
    float high_bound = .01f;
    float random_number = low_bound + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (high_bound - low_bound)));
    a_sound.setPitch(1 + random_number);
    b_sound.setPitch(1 + random_number);
    c_sound.setPitch(1 + random_number);
    d_sound.setPitch(1 + random_number);
    e_sound.setPitch(1 + random_number);
    f_sound.setPitch(1 + random_number);
    g_sound.setPitch(1 + random_number);
    h_sound.setPitch(1 + random_number);
    i_sound.setPitch(1 + random_number);
    j_sound.setPitch(1 + random_number);
    k_sound.setPitch(1 + random_number);
    l_sound.setPitch(1 + random_number);
    m_sound.setPitch(1 + random_number);
    n_sound.setPitch(1 + random_number);
    o_sound.setPitch(1 + random_number);
    p_sound.setPitch(1 + random_number);
    q_sound.setPitch(1 + random_number);
    r_sound.setPitch(1 + random_number);
    s_sound.setPitch(1 + random_number);
    t_sound.setPitch(1 + random_number);
    u_sound.setPitch(1 + random_number);
    v_sound.setPitch(1 + random_number);
    w_sound.setPitch(1 + random_number);
    x_sound.setPitch(1 + random_number);
    y_sound.setPitch(1 + random_number);
    z_sound.setPitch(1 + random_number);
    nk_1_sound.setPitch(1 + random_number);
    nk_2_sound.setPitch(1 + random_number);
    nk_3_sound.setPitch(1 + random_number);
    nk_4_sound.setPitch(1 + random_number);
    nk_5_sound.setPitch(1 + random_number);
    nk_6_sound.setPitch(1 + random_number);
    nk_7_sound.setPitch(1 + random_number);
    nk_8_sound.setPitch(1 + random_number);
    nk_9_sound.setPitch(1 + random_number);
    nk_0_sound.setPitch(1 + random_number);
    backspace_sound.setPitch(1 + random_number);
    left_bracket_sound.setPitch(1 + random_number);
    blank_sound.setPitch(1 + random_number);
    delete_sound.setPitch(1 + random_number);
    enter_sound.setPitch(1 + random_number);
    exit_sound.setPitch(1 + random_number);
    quotation_mark_sound.setPitch(1 + random_number);
    semicolon_sound.setPitch(1 + random_number);
    splash_sound.setPitch(1 + random_number);
    tab_sound.setPitch(1 + random_number);
    windows_sound.setPitch(1);
    comma_sound.setPitch(1);
    period_sound.setPitch(1);
    tilde_sound.setPitch(1 + random_number);
    hyphen_sound.setPitch(1 + random_number);
    add_sound.setPitch(1 + random_number);
    up_sound.setPitch(1 + random_number);
    down_sound.setPitch(1 + random_number);
    left_sound.setPitch(1 + random_number);
    right_sound.setPitch(1 + random_number);
    home_sound.setPitch(1 + random_number);
    end_sound.setPitch(1 + random_number);
    continue_sound.setPitch(1 + random_number);
    shift_sound.setPitch(1 + random_number);
    ctrl_sound.setPitch(0.9 + random_number);
    alt_sound.setPitch(0.8 + random_number);

    x_counter_obj.increase_all();
    if (!x_counter_obj.is_one_lower())
    {
      stop_continue_sound(continue_sound);
      is_block_continue_sound = false;
      x_counter_obj.times_all_zero();
      x_counter_obj.continue_value_reinit();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
      if (x_counter_obj.a_d >= 0 && x_counter_obj.a_d <= 1)
      {
        x_counter_obj.a_d_times++;
        if (x_counter_obj.a_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        a_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        b_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        c_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        d_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        e_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        f_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        g_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        h_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        i_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        j_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        k_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        l_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        m_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        n_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        o_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        p_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        q_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        r_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        s_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        t_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        u_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        v_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        w_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        x_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        y_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        z_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        tilde_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        hyphen_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        add_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_0_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_1_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_2_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_3_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_4_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_5_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_6_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_7_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_8_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        nk_9_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          if (x_counter_obj.backspace_continue_d > 2)
          {
            backspace_sound.play();
            x_counter_obj.backspace_continue_d = 0;
          }
          x_counter_obj.backspace_continue_d++;
        }
      }
      else
      {
        backspace_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.backspace_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LBracket))
    {
      if (x_counter_obj.left_bracket_d <= 2 && x_counter_obj.left_bracket_d >= 0)
      {
        x_counter_obj.left_bracket_d_times++;
        if (x_counter_obj.left_bracket_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        left_bracket_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.left_bracket_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::RBracket))
    {
      if (x_counter_obj.right_bracket_d <= 2 && x_counter_obj.right_bracket_d >= 0)
      {
        x_counter_obj.right_bracket_d_times++;
        if (x_counter_obj.right_bracket_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        right_bracket_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.right_bracket_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Comma))
    {
      if (x_counter_obj.comma_d <= 2 && x_counter_obj.comma_d >= 0)
      {
        x_counter_obj.comma_d_times++;
        if (x_counter_obj.comma_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        comma_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.comma_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Period))
    {
      if (x_counter_obj.period_d <= 2 && x_counter_obj.period_d >= 0)
      {
        x_counter_obj.period_d_times++;
        if (x_counter_obj.period_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        period_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.period_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
      if (x_counter_obj.blank_d <= 2 && x_counter_obj.blank_d >= 0)
      {
        x_counter_obj.blank_d_times++;
        if (x_counter_obj.blank_d_times >= 30)
        {
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        blank_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        delete_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        enter_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        quotation_mark_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        semicolon_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.semicolon_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) || sf::Keyboard::isKeyPressed(sf::Keyboard::RShift))
    {
      if (x_counter_obj.shift_d <= 2 && x_counter_obj.shift_d >= 0)
      {
      }
      else
      {
        shift_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        splash_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        tab_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.tab_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) || sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem))
    {
      if (x_counter_obj.windows_d <= 2 && x_counter_obj.windows_d >= 0)
      {
      }
      else
      {
        windows_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        up_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        down_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        right_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
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
          play_continue_sound(continue_sound);
        }
      }
      else
      {
        left_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.left_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Home))
    {
      if (x_counter_obj.home_d <= 2 && x_counter_obj.home_d >= 0)
      {
      }
      else
      {
        home_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.home_d = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::End))
    {
      if (x_counter_obj.end_d <= 2 && x_counter_obj.end_d >= 0)
      {
      }
      else
      {
        end_sound.play();
        if (x_counter_obj.is_one_lower())
        {
          is_block_continue_sound = true;
        }
        stop_continue_sound(continue_sound);
      }
      x_counter_obj.end_d = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
    {
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
      {
        if (x_counter_obj.ctrl_c_d <= 2 && x_counter_obj.ctrl_c_d >= 0)
        {
        }
        else
        {
          ctrl_c_sound.play();
          if (x_counter_obj.is_one_lower())
          {
            is_block_continue_sound = true;
          }
          stop_continue_sound(continue_sound);
        }
        x_counter_obj.ctrl_c_d = 0;
      }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
    {
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
      {
        if (x_counter_obj.ctrl_v_d <= 2 && x_counter_obj.ctrl_v_d >= 0)
        {
          x_counter_obj.ctrl_v_d_times++;
          if (x_counter_obj.ctrl_v_d_times >= 30)
          {
            set_pool_buffer(ctrl_v_sound_buffer, "ctrl_v");
            if (x_counter_obj.ctrl_v_continue_d > 2)
            {
              // ctrl_v_sound.play();
              get_next_from_pool().play();
              x_counter_obj.ctrl_v_continue_d = 0;
            }
            x_counter_obj.ctrl_v_continue_d++;
          }
        }
        else
        {
          ctrl_v_sound.play();
          if (x_counter_obj.is_one_lower())
          {
            is_block_continue_sound = true;
          }
          stop_continue_sound(continue_sound);
        }
        x_counter_obj.ctrl_v_d = 0;
      }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
    {
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt))
      {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F9))
        {
          exit_program(exit_sound);
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